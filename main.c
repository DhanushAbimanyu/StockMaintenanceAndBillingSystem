#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

typedef struct
{
    char itemName[50],itemId[50],itemCategory[50];
    int itemRate;
    int itemQuantity;
} record;
record item;

typedef struct
{
    char customerUserName[50],passWord[20],customerCity[50];
    int CustomerCredit;
} user;
user customer;


void gotoxy(short x, short y)
{
    COORD position = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

int main(void)
{
    welcomePage();
    loginPage();
    return 0;
}

void welcomePage()
{
    time_t currentTime;
    time(&currentTime);
    printf("\n\n\t---------------------------------------------------------------------------------------------------------\n");
    printf("\t\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\xbd\t     WELCOME TO      \t\xbd\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\xbd\t  ABI SHOPPING MALL    \t\xbd\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\t\t\t\t\t\t\t\t\t\t\t\t\t\xbd\n");
    printf("\t\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
    printf("\t\t\t\t\t     %s",ctime(&currentTime));
    printf("\t\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\xbd\n");
    printf("\t---------------------------------------------------------------------------------------------------------\n");
    printf("\t\n\n\t\t\t\t\t  Press any key to continue.........\t\t\t\t\t\t\t\t\t\t\n");
    getch();
    system("cls");
}

void loginPage()
{
    int choice;
    do
    {
        system("cls");
        char c;
        printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
        printf("                                                                                          ");
        printf("\n\t\t   Enter [1] For Company Login");
        printf("\n\t\t   Enter [2] For Customer Login");
        printf("\n\t\t   Enter [3] For Management Login");
        printf("\n\t\t   Enter [4] To Exit Login Window");
        printf("\n\n\t\t   Enter your choice[1-4]");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            companyLoginPage();
            break;
        case 2:
            customerLoginPage();
            break;
        case 3:
            managementLoginPage();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\t\tInvalid Choice");
            printf("\n\t\tPress any key to go back to login window...");
            getch();
            break;
        }
    }
    while(choice!=4);
}

void companyLoginPage()
{
    int index=0;
    char userName[50],character=' ';
    char passWord[20],code[10];
    char defaultUser[10]="abi";
    char defaultPassWord[10]="abi@123";
    system("cls");
    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\n\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb COMPANY LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                          USERNAME:-");
    scanf("%s",&userName);
    index=0;
    printf(" \n                           PASSWORD:-");
    do
    {
        passWord[index]=getch();
        character=passWord[index];
        if(character==13)
            break;
        else if(character==8||character==32||character==9)
        {
            printf("\n\n\t\tYou have entered Invalid Password Format!!");
            printf("\n\n\t\tThe password must contain only Characters [A-Z a-z] and Numbers [0-9]\n\t\t and any Special Characters with No Spaces!!");
            printf("\n\t\tPress any key to go back and try again...");
            getch();
            companyLoginPage();
        }
        else
        {
            printf("*");
        }
        index++;
    }
    while(index<20);
    passWord[index]='\0';
    index=0;
    if(strcmp(userName,defaultUser)==0 && strcmp(passWord,defaultPassWord)==0)
    {
        printf("\n\n\n\tWELCOME TO ABI SHOPPING MALL !!!!\n\n\t\t\tLOGIN IS SUCCESSFUL!!..");
        printf("\n\n\tSYSTEM IS LOADING. PLEASE WAIT...");
        for(index=0; index<3; index++)
        {
            printf(".");
            Sleep(500);
        }
        printf("\n\n\n\t\t\tPress any key to continue...");
        getch();
        companyMenuPage();
    }
    else
    {
        printf("\n\n\n\t\tSORRY !!!!  INVALID LOGIN CREDENTIALS\n\t\t       LOGIN IS UNSUCCESSFUL...");
        printf("\n\n\t\tPress any key to go back to Login Window...");
        getch();
    }
    system("cls");
}

void companyMenuPage()
{
    int choice;
    do
    {
        system("cls");
        printf("\n\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\n\t\t\tEnter [1] To Add Items");
        printf("\n\t\t\tEnter [2] To Delete Items");
        printf("\n\t\t\tEnter [3] To Search Items");
        printf("\n\t\t\tEnter [4] To View Items");
        printf("\n\t\t\tEnter [5] To Edit Items");
        printf("\n\t\t\tEnter [6] To Exit / LogOut");
        printf("\n\n\t\t\tEnter your choice[1-6]");
        scanf("%i", &choice);
        switch(choice)
        {
        case 1:
            addItemPage();
            break;
        case 2:
            deleteItemPage();
            break;
        case 3:
            searchItemPage();
            break;
        case 4:
            displayItemPage();
            break;
        case 5:
            editItemPage();
            break;
        case 6:
            printf("\n\t\tPress any Key Log Out...");
            getch();
            break;
        default:
            printf("\n\t\tInvalid Choice! Back to Company Menu..\n");
            printf("\n\t\tPress any Key to Continue....");
            getch();
            break;
        }
    }
    while(choice!=6);
}

void addItemPage()
{
    int index,position;
    int isValid,flag;
    char character,itemId[50];
    int a=0;
    FILE *file;
    do
    {
        system("cls");
        printf("\n\n\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        if((file=fopen("itemRecordsDB.txt","r"))==NULL)
        {
            gotoxy(10,3);
            printf("\n\n\t\tNO RECORDS");
        }
        else
        {
            gotoxy(0,5);
            for(index=0; index<100; index++)
            {
                printf("\xdb");
            }
            gotoxy(5,6);
            printf("Item ID");
            gotoxy(25,6);
            printf("Item Name");
            gotoxy(40,6);
            printf("Item Category");
            gotoxy(60,6);
            printf("Item Rate");
            gotoxy(80,6);
            printf("Item Quantity\n");
            for(index=0; index<100; index++)
            {
                printf("\xdb");
            }
            position=8;
            while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
            {
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                position++;
            }
            printf("\n");
            for(index=0; index<100; index++)
                printf("\xdb");
            position++;
        }
        fclose(file);

        printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ADD ITEM DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        file=fopen("itemRecordsDB.txt","a+");
        if(file!=NULL)
        {
            do
            {
                flag=0;
                printf("\n\n\t\tItem ID\t\t:");
                scanf("%s",itemId);
                while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
                {
                    if(strcmp(itemId,item.itemId)==0)
                    {
                        printf("\n\n\t\tTHE ITEM ID ALREADY EXISTS.\n");
                        printf("\n\t\tPress any key to try again...");
                        getch();
                        flag=1;
                    }
                }
                strcpy(item.itemId,itemId);
            }while(flag==1);
        }
        else
        {
            printf("\n\n\t\tItem Product Code\t\t:");
            scanf("%s",&item.itemId);
        }

        printf("\n\n\t\t<<<<<<<<<<<<<<Enter Product Details>>>>>>>>>>>>>");
        isValid=0;
        do
        {
            fflush(stdin);
            printf("\n\n\t\tItem Name\t\t:");
            gets(item.itemName);
            item.itemName[0]=toupper(item.itemName[0]);
            for (index=0; index<strlen(item.itemName); ++index)
            {
                if(isalpha(item.itemName[index]))
                    isValid = 1;
                else
                {
                    isValid = 0;
                    break;
                }
            }
            if (!isValid)
            {
                printf("\n\tName should contain only characters. Please try again\n");
                getch();
            }
        }
        while(!isValid);

        isValid=0;
        do
        {
            char itemCategory[40];
            fflush(stdin);
            printf("\n\n\t\tItem Category\t\t:");
            gets(item.itemCategory);
            item.itemCategory[0]=toupper(item.itemCategory[0]);
            for (index=0; index<strlen(item.itemCategory); ++index)
            {
                if(isalpha(item.itemCategory[index]))
                    isValid = 1;
                else
                {
                    isValid = 0;
                    break;
                }
            }
            if (!isValid)
            {
                printf("\n\tName should contain only characters. Please try again\n");
                getch();
            }
        }
        while(!isValid);

        isValid=0;
        do
        {
            printf("\n\n\t\tItem Price [10-5000] Rupees\t:");
            scanf("%i",&item.itemRate);
            if(item.itemRate<10||item.itemRate>5000)
            {
                printf("\n\tThe Price must be between 10 and 5000.Re-Enter.\n");
            }
            else
                isValid=1;
        }
        while(!isValid);

        isValid=0;
        do
        {
            printf("\n\n\t\tItem Quantity [1-500]\t:");
            scanf("%i",&item.itemQuantity);
            if(item.itemQuantity<1||item.itemQuantity>500)
            {
                printf("\n\tThe Quantity must be between 1 and 500.Re-Enter.\n");
            }
            else
                isValid=1;
        }
        while(!isValid);

        file=fopen("itemRecordsDB.txt","a");
        fprintf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
        fclose(file);
        printf("\n\n\tPress 'Enter' to add more item and any other key to go to main menu....");
    }
    while((character = getch()) =='\r');
    displayItemPage();
}

void deleteItemPage()
{
    int index,position;
    char target[50];
    int found=0;
    FILE *sourceFile, *temporaryFile,*file;
    system("cls");
    printf("\n\n\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    if((file=fopen("itemRecordsDB.txt","r"))==NULL)
    {
        gotoxy(10,3);
        printf("\n\n\t\tNO RECORDS");
    }
    else
    {
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item's Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=8;
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
            printf("\xdb");
        position++;
    }
    fclose(file);

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb DELETE ITEM DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    sourceFile=fopen("itemRecordsDB.txt","r");
    temporaryFile=fopen("temporaryDB.txt","w");
    printf("\n\n\t\t\tEnter Item ID to Delete:");
    fflush(stdin);
    scanf("%s",target);
    while(fscanf(sourceFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
    {
        if(strcmp(target,item.itemId)==0)
        {
            found=1;
        }
        else
        {
            fprintf(temporaryFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
        }
    }
    if(!found)
    {
        printf("\n\n\t\tRecord not Found!!!");
        printf("\n\n\t\tPress any key to try again....");
        getch();
        fclose(sourceFile);
        fclose(temporaryFile);
    }
    else
    {
        printf("\n\n\t\tRecord Deleted!!!");
        fclose(sourceFile);
        fclose(temporaryFile);
        sourceFile=fopen("itemRecordsDB.txt","w");
        fclose(sourceFile);
        sourceFile=fopen("itemRecordsDB.txt","a");
        temporaryFile=fopen("temporaryDB.txt","r");
        while(fscanf(temporaryFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            fprintf(sourceFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
        }
        fclose(sourceFile);
        fclose(temporaryFile);
        temporaryFile=fopen("temporaryDB.txt","w");
        fclose(temporaryFile);
        printf("\n\n\t\tPress any key to go to View Changes....");
        getch();
        displayItemPage();
    }
}

void editItemPage()
{
    int index, isValid,position;
    FILE *file,*temporaryFile;
    int isPresent=0,i,q;
    char itemId[50],edit;
    system("cls");
    printf("\n\n\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    file=fopen("itemRecordsDB.txt","a+");
    if(file==NULL)
    {
        gotoxy(10,3);
        printf("\n\n\t\tNO RECORDS");
    }
    else
    {
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item's Quantity\n");
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
        position=8;
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
            printf("\xdb");
        position++;
    }
    fclose(file);

    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb EDIT ITEM DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    if((file=fopen("itemRecordsDB.txt","r"))==NULL)
    {
        printf("\n\n\t\tNO RECORD ADDED!!");
    }
    else
    {
        file=fopen("itemRecordsDB.txt","a+");
        temporaryFile= fopen("temporaryDB.txt","a");
        printf("\n\n\t\t\tEnter Item's ID to Edit:");
        scanf("%s",itemId);
        fflush(stdin);
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if(strcmp(itemId,item.itemId)==0)
            {
                isPresent=1;
                printf("\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb Record Found \xdb\xdb\xdb\xdb\xdb");
                printf("\n\n\t\tItem Id\t\t: %s",item.itemId);
                printf("\n\t\tItem Name\t: %s",item.itemName);
                printf("\n\t\tItems Category\t: %s",item.itemCategory);
                printf("\n\t\tItem Rate\t: %i",item.itemRate);
                printf("\n\t\tItem Quantity\t: %i",item.itemQuantity);
                printf("\n\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb New Record \xdb\xdb\xdb\xdb\xdb");
                printf("\n\n\t\tNew Item's ID\t\t:");
                scanf("%s",item.itemId);
                isValid=0;
                do
                {
                    fflush(stdin);
                    printf("\n\t\tNew Item's Name\t\t:");
                    gets(item.itemName);
                    item.itemName[0]=toupper(item.itemName[0]);
                    for(index=0; index<strlen(item.itemName); ++index)
                    {
                        if(isalpha(item.itemName[index]))
                            isValid = 1;
                        else
                        {
                            isValid = 0;
                            break;
                        }
                    }
                    if (!isValid)
                    {
                        printf("\n\tName should contain only characters. Please try again\n");
                        getch();
                    }
                }
                while(!isValid);

                do
                {
                    char category[40];
                    fflush(stdin);
                    printf("\n\t\tNew Item's Category\t:");
                    gets(item.itemCategory);
                    item.itemCategory[0]=toupper(item.itemCategory[0]);
                    for (index=0; index<strlen(item.itemCategory); ++index)
                    {
                        if(isalpha(item.itemCategory[index]))
                            isValid = 1;
                        else
                        {
                            isValid = 0;
                            break;
                        }
                    }
                    if (!isValid)
                    {
                        printf("\n\tName should contain only characters. Please try again\n");
                        getch();
                    }
                }
                while(!isValid);

                isValid=0;
                do
                {
                    printf("\n\t\tNew Price [10-5000]Rupees:");
                    scanf("%i",&item.itemRate);
                    if(item.itemRate<10||item.itemRate>5000)
                    {
                        printf("\n\tThe Price must be between 10 and 5000.Re-Enter.\n");
                    }
                    else
                        isValid=1;
                }
                while(!isValid);

                isValid=0;
                do
                {
                    printf("\n\t\tNew Quantity [1-500]\t:");
                    scanf("%i",&item.itemQuantity);
                    if(item.itemQuantity<1||item.itemQuantity>500)
                    {
                        printf("\n\tThe Quantity must be between 1 and 500.Re-Enter.\n");
                    }
                    else
                        isValid=1;
                }
                while(!isValid);

                printf("\n\n\t\tPress any Key to edit the existing record....");
                edit=getch();
                fprintf(temporaryFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                fflush(stdin);
                printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
            }
            else
            {
                fprintf(temporaryFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                fflush(stdin);
            }
        }
        if(!isPresent)
        {
            printf("\n\n\t\tTHIS ITEM DOESN'T EXIST!!!!");
            printf("\n\n\t\tPress any key to go to Company Menu....");
            getch();
        }
        else
        {
            fclose(file);
            fclose(temporaryFile);
            file=fopen("itemRecordsDB.txt","w");
            fclose(file);
            file=fopen("itemRecordsDB.txt","a");
            temporaryFile=fopen("temporaryDB.txt","r");
            while(fscanf(temporaryFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
            {
                fprintf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
            }
            fclose(file);
            fclose(temporaryFile);
            temporaryFile=fopen("temporaryDB.txt","w");
            fclose(temporaryFile);
            printf("\n\n\t\tPress any key to View the changes....");
            getch();
            displayItemPage();
        }
        fclose(file);
        fclose(temporaryFile);
    }
}

void displayItemPage()
{
    FILE *file;
    int index,position;
    system("cls");
    printf("\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    if((file=fopen("itemRecordsDB.txt","r"))==NULL)
    {
        gotoxy(10,3);
        printf("\n\n\t\tNO RECORDS");
    }
    else
    {
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=8;
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
            printf("\xdb");
        position++;
    }
    fclose(file);
    printf("\n\n\tPress any Key to Continue....");
    getch();
}

void searchItemPage()
{
    int choice;
    fflush(stdin);
    do
    {
        system("cls");
        gotoxy(0,2);
        printf("  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH ITEM DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\t\tEnter [1] To Search by Item ID");
        printf("\n\t\tEnter [2] To Search by Item Category");
        printf("\n\t\tEnter [3] To Search by Item Quantity");
        printf("\n\t\tEnter [4] To Search by Item Rate");
        printf("\n\t\tEnter [5] To Exit Search Menu");
        printf("\n\n\t\tEnter your choice[1-5]");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            searchById();
            break;
        case 2:
            searchByCategory();
            break;
        case 3:
            searchByQuantity();
            break;
        case 4:
            searchByRate();
            break;
        case 5:
            printf("\n\t\tPress any key to go back to Menu!");
            getch();
            break;
        default:
            printf("\n\n\t\tInvalid Choice!!");
            printf("\n\t\tPress any Key to Continue....");
            getch();
            break;
        }
    }
    while(choice!=5);
}

void searchById()
{
    char target[50];
    int found=0,position,index;
    FILE *file;
    system("cls");
    file=fopen("itemRecordsDB.txt","r");
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH ITEM ID \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\tEnter item ID to search:");
    fflush(stdin);
    gets(target);
    while (fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF&&found==0)
    {
        if(strcmp(target,item.itemId)==0)
        {
            found=1;
        }
    }
    if(found)
    {
        system("cls");
        printf("\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if(strcmp(target,item.itemId)==0)
            {
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                position++;
            }
        }
        printf("\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
    }
    else
        printf("\n\n\t\tNo Record found!!!");
    fclose(file);
    printf("\n\n\t\tPress any key to go to Search Menu....");
    getch();
}

void searchByCategory()
{
    char target[50];
    int found=0,position,index;
    FILE *file;
    system("cls");
    file=fopen("itemRecordsDB.txt","r");
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH ITEM CATEGORY \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\tEnter Item Category to search:");
    fflush(stdin);
    gets(target);
    target[0]=toupper(target[0]);
    while (fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF&&found==0)
    {
        if(strcmp(target,item.itemCategory)==0)
        {
            found=1;
        }
    }
    if(found)
    {
        system("cls");
        printf("\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if(strcmp(target,item.itemCategory)==0)
            {
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                position++;
            }
        }
        printf("\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
    }
    else
        printf("\n\n\t\tNo Record found!!!");
    fclose(file);
    printf("\n\n\t\tPress any key to go to Search Menu....");
    getch();
}

void searchByQuantity()
{
    int position,lowerRange,upperRange,i;
    FILE *file;
    int flag=0;
    file=fopen("itemRecordsDB.txt","r");
    system("cls");
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t         \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH ITEM QUANTITY \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\tEnter Lower Range to search:");
    scanf("%d",&lowerRange);
    printf("\n\n\t\t\tEnter Upper Range to search:");
    scanf("%d",&upperRange);
    fflush(stdin);

    if(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
    {
        system("cls");
        printf("\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        gotoxy(0,5);
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if((item.itemQuantity>=lowerRange)&&(item.itemQuantity<=upperRange))
            {
                flag=1;
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                position++;
            }
        }
        printf("\n");
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
    }
    else
        printf("\n\n\t\tNo Record found!!!");
    if(!flag)
        printf("\n\n\t\tNo Record found!!!");
    fclose(file);
    printf("\n\n\t\tPress any key to go to Search Menu....");
    getch();
}

void searchByRate()
{
    int position,lowerRange,upperRange,i;
    FILE *file;
    int flag=0;
    file=fopen("itemRecordsDB.txt","r");
    system("cls");
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t           \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb SEARCH ITEM RATE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\tEnter Lower Range to search:");
    scanf("%d",&lowerRange);
    printf("\n\n\t\t\tEnter Upper Range to search:");
    scanf("%d",&upperRange);
    fflush(stdin);

    if(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
    {
        system("cls");
        printf("\n\n\t   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        gotoxy(0,5);
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if((item.itemRate>=lowerRange)&&(item.itemRate<=upperRange))
            {
                flag=1;
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                position++;
            }
        }
        printf("\n");
        for(i=0; i<100; i++)
        {
            printf("\xdb");
        }
    }
    else
        printf("\n\n\t\tNo Record found!!!");
    if(!flag)
        printf("\n\n\t\tNo Record found!!!");
    fclose(file);
    printf("\n\n\t\tPress any key to go to Search Menu....");
    getch();
}

void customerLoginPage()
{
    int choice;
    do
    {
        system("cls");
        FILE *file;
        printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\n     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb CUSTOMER LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
        printf("\n\n\t\t\tEnter [1] For Existing User");
        printf("\n\t\t\tEnter [2] For New User");
        printf("\n\t\t\tEnter [3] To Exit Customer Login Window");
        printf("\n\n\t\t\tEnter your choice[1-3]");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            existingUserPage();
            break;
        case 2:
            newUserPage();
            break;
        case 3:
            break;
        default:
            printf("\n\n\t\tYou have entered a wrong choice");
            printf("\n\t\tPress any key to continue to the Customer Login window..");
            getch();
            break;
        }
    }
    while(choice!=3);
}

void newUserPage()
{
    int credit=0;
    char userName[50],passWord[50],city[50];
    int index=0;
    char character=' ';
    system("cls");
    FILE *file;
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n\n\t\t\tCreate your Login ID and Password!!\n");
    printf("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb USER LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");

    int accepted=0;
    do
    {
        printf(" \n\n                        USERNAME:-");
        scanf("%s",userName);
        userName[0]=toupper(userName[0]);
        file=fopen("customerRecordsDB.txt","r");
        if(fopen("customerRecordsDB.txt","r")==NULL)
        {
            accepted=1;
        }
        else
        {
            while(fscanf(file,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,&customer.CustomerCredit)!=EOF)
            {
                if(strcmp(customer.customerUserName,userName)==0)
                {
                    printf("\n\t\tThe User Name already Exists!!\n");
                    accepted=0;
                    break;
                }
                else
                    accepted=1;
            }
        }
    }
    while(accepted==0);
    strcpy(customer.customerUserName,userName);

    accepted=0;
    do
    {
        index=0;
        printf(" \n                        PASSWORD:-");
        do
        {
            passWord[index]=getch();
            character=passWord[index];
            if(character==13)
                break;
            else if(character==8||character==32||character==9)
            {
                printf("\n\n\t\tYour have entered Invalid Password Format!!");
                printf("\n\n\t\tThe password must contain only Characters [A-Z a-z] and Numbers [0-9]\n\t\t and any Special Characters with No Spaces!!");
                printf("\n\t\tPress any key to go back and try again...\n");
                accepted=0;
                break;
            }
            else
            {
                printf("*");
                accepted=1;
            }
            index++;
        }
        while(index<20);
    }
    while(accepted==0);
    passWord[index]='\0';
    strcpy(customer.passWord,passWord);

    printf(" \n\n                            CITY:-");
    scanf("%s",city);
    city[0]=toupper(city[0]);
    strcpy(customer.customerCity,city);
    customer.CustomerCredit=credit;

    file=fopen("customerRecordsDB.txt","a+");
    fprintf(file,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,customer.CustomerCredit);
    fclose(file);
    printf("\n\n\t\tPress any key to go back to Customer login menu");
    getch();
}

void existingUserPage()
{
    char userName[20],passWord[20],city[20],character=' ';
    int index=0,found=0;
    system("cls");
    FILE *file,*currentUser;
    file=fopen("customerRecordsDB.txt","r");
    currentUser=fopen("currentUser.txt","a+");
    if(file!=NULL)
    {
        printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n\n\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb USER LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
        printf("\n\n                        USERNAME:-");
        scanf("%s",userName);
        userName[0]=toupper(userName[0]);
        int accepted=0;
        do
        {
            index=0;
            printf(" \n                        PASSWORD:-");
            do
            {
                passWord[index]=getch();
                character=passWord[index];
                if(character==13)
                    break;
                else if(character==8||character==32||character==9)
                {
                    printf("\n\n\t\tYour have entered Invalid Password Format!!");
                    printf("\n\n\t\tThe password must contain only Characters [A-Z a-z] and Numbers [0-9]\n\t\t and any Special Characters with No Spaces!!");
                    printf("\n\t\tPress any key to go back and try again...");
                    getch();
                    accepted=0;
                    break;
                }
                else
                {
                    printf("*");
                    accepted=1;
                }
                index++;
            }
            while(index<20);
        }
        while(accepted==0);
        passWord[index]='\0';
        strcpy(customer.passWord,passWord);

        file=fopen("customerRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,&customer.CustomerCredit)!=EOF&&found==0)
        {
            if(strcmp(customer.customerUserName,userName)==0&&strcmp(customer.passWord,passWord)==0)
            {
                found=1;
                currentUser=fopen("currentUser.txt","w");
                fprintf(currentUser,"%s %s\n",customer.customerUserName,customer.customerCity);
                fclose(currentUser);
            }
        }
        if(found)
        {
            printf("\n\n\n\tWELCOME TO ABI SHOPPING MALL !!!!\n\n\t\t\tLOGIN IS SUCCESSFUL!!..");
            printf("\n\n\tSYSTEM IS LOADING. PLEASE WAIT...");
            for(index=0; index<3; index++)
            {
                printf(".");
                Sleep(500);
            }
            fclose(file);
            customerMenuPage();
        }
        else
        {
            printf("\n\n\n\t\tSORRY !!!!  INVALID LOGIN CREDENTIALS\n\t\t     LOGIN IS UNSUCCESSFUL...");
            getch();
            fclose(file);
        }
    }
    else
    {
        printf("\n\n\t\tNO RECORDS!!");
    }
    fclose(file);
    printf("\n\n\t\tPress any key to continue....");
    getch();
    system("cls");
}

void customerMenuPage()
{
    int choice;
    do
    {
        system("cls");
        printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        printf("\n\t\tEnter [1] To Search Items");
        printf("\n\t\tEnter [2] To All View Items");
        printf("\n\t\tEnter [3] To Add to Your Cart");
        printf("\n\t\tEnter [4] To Exit!");
        printf("\n\n\t\tEnter your choice[1-4]");
        scanf("%i", &choice);
        switch(choice)
        {
        case 1:
            searchItemPage();
            break;
        case 2:
            displayItemPage();
            break;
        case 3:
            addToCart();
            break;
        case 4:
            break;
        default:
            printf("\n\n\t\tInvalid Choice!");
            printf("\n\t\tPress any Key to Continue in the Customer Menu...");
            getch();
            break;
        }
    }
    while(choice!=4);
}

void addToCart()
{
    FILE *file,*cartFile,*temporaryCartFile;
    char character='N',itemId[20],itemName[20],itemCategory[20];
    int choice,itemQuantity,itemRate,newQuantity,found=0,flag=0,size;
    system("cls");
    printf("\n\n\t  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    int index,position;

    if(file=fopen("itemRecordsDB.txt","r")==NULL)
    {
        gotoxy(10,3);
        printf("\n\n\t\tNO RECORDS");
        getch();
    }
    else
    {
        gotoxy(0,5);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,6);
        printf("Item ID");
        gotoxy(25,6);
        printf("Item Name");
        gotoxy(40,6);
        printf("Item Category");
        gotoxy(60,6);
        printf("Item Rate");
        gotoxy(80,6);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
    }
    fclose(file);

    position+=2;
    cartFile=fopen("addtocart.txt","r");
    printf("\n\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb YOUR CART \xdb\xdb\xdb\xdb\xdb");
    position+=2;
    if(cartFile==NULL)
    {
        gotoxy(10,++position);
        printf("\n\t\t\t\tNO RECORDS!!!");
    }
    else
    {
        gotoxy(0,position);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position++;
        gotoxy(5,position);
        printf("Item ID");
        gotoxy(25,position);
        printf("Item Name");
        gotoxy(40,position);
        printf("Item Category");
        gotoxy(60,position);
        printf("Item Rate");
        gotoxy(80,position);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position+=2;
        cartFile=fopen("addtocart.txt","r");
        while(fscanf(cartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
    }
    fclose(file);

    fflush(stdin);
    printf("\n\n\t\tPress [1] to Purchase More Items!!");
    printf("\n\t\tPress [2] to Finish your Purchase and Print the Bill!!");
    printf("\n\t\tPress [3] to Remove Item From Your Cart!!");
    printf("\n\t\tPress [4] to Exit the Purchase!!");
    printf("\n\n\t\tEnter your choice[1-4]");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        character='y';
        break;
    case 2:
        printBill();
        customerMenuPage();
        break;
    case 3:
        removeItemFromCart();
        addToCart();
        break;
    case 4:
        checkBill();
        break;
    default:
        printf("\n\t\tInvalid Choice!!");
        printf("\n\t\tPress any Key to try again...");
        getch();
        addToCart();
        break;
    }
    if(character=='Y'||character=='y')
    {
        file=fopen("itemRecordsDB.txt","r");
        if(file!=NULL)
        {
            printf("\n\n\t\tEnter the Item Id to purchase:");
            scanf("%s",itemId);
            found=0;
            while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
            {
                if(strcmp(itemId,item.itemId)==0)
                {
                    found=1;
                }
            }
            if(found==1)
            {
                file=fopen("itemRecordsDB.txt","r");
                while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
                {
                    if(strcmp(itemId,item.itemId)==0)
                    {
                        printf("\n\t\tEnter the number of quantity:");
                        scanf("%i",&itemQuantity);
                        if(item.itemQuantity==0)
                        {
                            printf("\n\t\tNo Stock..... \n\t\tPlease re-enter details!!\n");
                            getch();
                            addToCart();
                        }
                        if(itemQuantity>item.itemQuantity)
                        {
                            printf("\n\t\tYour request is greater than the Stock!!\n\t\tPlease re-enter details!!\n");
                            getch();
                            addToCart();
                        }
                        if(itemQuantity==0)
                        {
                            printf("\n\t\tPlease enter the valid purchase Quantity...");
                            getch();
                            addToCart();
                        }
                        strcpy(itemName,item.itemName);
                        strcpy(itemCategory,item.itemCategory);
                        itemRate=item.itemRate;

                        flag=0;
                        fseek(cartFile,0,SEEK_END);
                        size=ftell(cartFile);
                        if(size!=0)
                        {
                            cartFile=fopen("addtocart.txt","r");
                            while(fscanf(cartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
                            {
                                if(strcmp(itemId,item.itemId)==0)
                                {
                                    temporaryCartFile=fopen("temporaryCartFile.txt","a");
                                    newQuantity=item.itemQuantity+itemQuantity;
                                    fprintf(temporaryCartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,newQuantity);
                                    fclose(temporaryCartFile);
                                    flag=1;
                                }
                                else
                                {
                                    temporaryCartFile=fopen("temporaryCartFile.txt","a");
                                    fprintf(temporaryCartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                                    fclose(temporaryCartFile);
                                }
                            }
                            fclose(temporaryCartFile);
                            fclose(cartFile);
                            cartFile=fopen("addtocart.txt","w");
                            fclose(cartFile);
                            cartFile=fopen("addtocart.txt","a");
                            temporaryCartFile=fopen("temporaryCartFile.txt","r");
                            while(fscanf(temporaryCartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
                            {
                                fprintf(cartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                            }
                            fclose(cartFile);
                            fclose(temporaryCartFile);
                            temporaryCartFile=fopen("temporaryCartFile.txt","w");
                            fclose(temporaryCartFile);
                            if(flag==0)
                            {
                                cartFile=fopen("addtocart.txt","a");
                                fprintf(cartFile,"%s %s %s %i %i\n",itemId,itemName,itemCategory,itemRate,itemQuantity);
                                fclose(cartFile);
                            }
                        }
                        else
                        {
                            cartFile=fopen("addtocart.txt","a");
                            fprintf(cartFile,"%s %s %s %i %i\n",itemId,itemName,itemCategory,itemRate,itemQuantity);
                            fclose(cartFile);
                        }
                        updateQuantity(itemId,itemQuantity);
                    }
                }
            }
            else
            {
                printf("\n\t\tThe Product ID Does not Exist\n");
                getch();
                addToCart();
            }
        }
        else
        {
            printf("\n\t\tNo Records Found!!\n");
        }
        fclose(file);
        fclose(cartFile);
        addToCart();
    }
}

void checkBill()
{
    FILE *file;
    int size;
    if((file=fopen("addtocart.txt","r"))!=NULL)
    {
        fseek(file,0,SEEK_END);
        size=ftell(file);
        if(size==0)
        {
            printf("\n\n\t\tPress any Key to Leave....");
            getch();
        }
        else
        {
            printf("\n\n\t\tYour Cart still has some Items...So,You cannot able to leave.....");
            printf("\n\n\t\tRemove all Items to Leave to the Customer Menu!!");
            getch();
            addToCart();
        }
    }
}

void removeItemFromCart()
{
    char target[20],character;
    int found=0;
    FILE *cartFile, *currentBillFile,*file,*removedItemFile;
    system("cls");
    printf("\n\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    int index,position;
    printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb YOUR CART \xdb\xdb\xdb\xdb\xdb");
    file=fopen("addtocart.txt","r");
    fseek(file,0,SEEK_END);
    int size=ftell(file);
    if(size==0)
    {
        gotoxy(10,5);
        printf("\n\n\t\tNo Items to Remove!!");
        printf("\n\n\t\tPress any key to go back to cart.");
        getch();
        fclose(file);
    }
    else
    {
        gotoxy(0,7);
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        gotoxy(5,8);
        printf("Item ID");
        gotoxy(25,8);
        printf("Item Name");
        gotoxy(40,8);
        printf("Item Category");
        gotoxy(60,8);
        printf("Item Rate");
        gotoxy(80,8);
        printf("Item Quantity\n");
        for(index=0; index<100; index++)
        {
            printf("\xdb");
        }
        position=10;
        file=fopen("addtocart.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",item.itemId);
            gotoxy(25,position);
            printf("%s",item.itemName);
            gotoxy(40,position);
            printf("%s",item.itemCategory);
            gotoxy(60,position);
            printf("%i",item.itemRate);
            gotoxy(80,position);
            printf("%i",item.itemQuantity);
            position++;
        }
        printf("\n");
        for(index=0; index<100; index++)
            printf("\xdb");
        position++;
        fclose(file);

        printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb REMOVE ITEM FROM CART \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        cartFile=fopen("addtocart.txt","r");
        currentBillFile=fopen("currentBill.txt","a");
        printf("\n\n\t\tDo you want to Remove Items(Y/N)");
        character=getch();
        if(character=='Y'||character=='y')
        {
            printf("\n\n\t\t\tEnter item Id to Remove:");
            fflush(stdin);
            scanf("%s",target);
            while(fscanf(cartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
            {
                if(strcmp(target,item.itemId)==0)
                {
                    removedItemFile=fopen("removedItemFromCart.txt","a");
                    fprintf(removedItemFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                    fclose(removedItemFile);
                    found=1;
                }
                else
                {
                    fprintf(currentBillFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                }
            }
            fclose(removedItemFile);
            if(!found)
            {
                printf("\n\n\t\tItem not Found!!!");
                printf("\n\n\t\tPress any key to continue...");
                getch();
            }
            else
            {
                printf("\n\n\t\tItem Deleted From Your Cart!!!");
                fclose(cartFile);
                fclose(currentBillFile);
                fclose(removedItemFile);
                cartFile=fopen("addtocart.txt","w");
                fclose(cartFile);
                cartFile=fopen("addtocart.txt","a");
                currentBillFile=fopen("currentBill.txt","r");
                while(fscanf(currentBillFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
                {
                    fprintf(cartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
                }
                fclose(cartFile);
                fclose(currentBillFile);
                currentBillFile=fopen("currentBill.txt","w");
                fclose(currentBillFile);
                updateRemovedItem();
            }
            removeItemFromCart();
        }
        else
        {
            printf("\n\n\t\tPress any key to continue....");
            getch();
            addToCart();
        }
    }
}

void updateRemovedItem()
{
    FILE *file,*removedItemFile,*temporaryCartFile;
    char itemId1[50],itemName1[50],itemCategory1[50];
    int itemQuantity1,itemRate1;
    char itemId2[50],itemName2[50],itemCategory2[50];
    int itemQuantity2,itemRate2;

    file=fopen("itemRecordsDB.txt","r");
    if(file==NULL)
    {
        printf("\n\n\t\tNO RECORD ADDED.\n");
        addToCart();
    }
    else
    {
        removedItemFile=fopen("removedItemFromCart.txt","r");
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(removedItemFile,"%s %s %s %i %i\n",itemId1,itemName1,itemCategory1,&itemRate1,&itemQuantity1)!=EOF)
        {
            while(fscanf(file,"%s %s %s %i %i\n",itemId2,itemName2,itemCategory2,&itemRate2,&itemQuantity2)!=EOF)
            {
                if(strcmp(itemId1,itemId2)==0)
                {
                    temporaryCartFile=fopen("temporaryCartFile.txt","a");
                    fprintf(temporaryCartFile,"%s %s %s %i %i\n",itemId1,itemName1,itemCategory1,itemRate1,itemQuantity1+itemQuantity2);
                    fclose(temporaryCartFile);
                }
                else
                {
                    temporaryCartFile=fopen("temporaryCartFile.txt","a");
                    fprintf(temporaryCartFile,"%s %s %s %i %i\n",itemId2,itemName2,itemCategory2,itemRate2,itemQuantity2);
                    fclose(temporaryCartFile);
                }
            }
        }
    }
    fclose(file);
    fclose(removedItemFile);
    fclose(temporaryCartFile);
    removedItemFile=fopen("removedItemFromCart.txt","w");
    fclose(removedItemFile);
    file=fopen("itemRecordsDB.txt","w");
    fclose(file);
    file=fopen("itemRecordsDB.txt","a");
    temporaryCartFile=fopen("temporaryCartFile.txt","r");
    while(fscanf(temporaryCartFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
    {
        fprintf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
    }
    fclose(file);
    fclose(temporaryCartFile);
    temporaryCartFile=fopen("temporaryCartFile.txt","w");
    fclose(temporaryCartFile);
    printf("\n\n\t\tPress any Key to Continue...!");
    getch();
    removeItemFromCart();
}

void updateQuantity(char *itemId,int Quantity)
{
    int a=0;
    FILE *file,*temporaryDBFile;
    if((file=fopen("itemRecordsDB.txt","r"))==NULL)
    {
        printf("\n\t\tNO RECORDS ADDED!!\n");
        addToCart();
    }
    else
    {
        temporaryDBFile= fopen("temporaryDBFile.txt","a");
        file=fopen("itemRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            if(strcmp(itemId,item.itemId)==0)
            {
                fprintf(temporaryDBFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity-Quantity);
            }
            else
            {
                fprintf(temporaryDBFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
            }
        }
    }
    fclose(file);
    fclose(temporaryDBFile);
    file=fopen("itemRecordsDB.txt","w");
    fclose(file);
    file=fopen("itemRecordsDB.txt","a");
    temporaryDBFile=fopen("temporaryDBFile.txt","r");
    while(fscanf(temporaryDBFile,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
    {
        fprintf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity);
    }
    fclose(file);
    fclose(temporaryDBFile);
    temporaryDBFile=fopen("temporaryDBFile.txt","w");
    fclose(temporaryDBFile);
    printf("\n\n\t\tPress any Key to Continue...!");
    getch();
}

void printBill()
{
    int credit;
    long int j,billNumber[10];
    time_t t;
    time(&t);
    srand(time(0));
    char userName[50],customerCity[50],usernow[50];
    FILE *file,*billFile,*currentUser,*sourceFile,*destinationFile;
    int index,size,position,total,grandtotal=0;
    file=fopen("addtocart.txt","r");
    fseek(file,0,SEEK_END);
    size=ftell(file);
    if(size==0)
    {
        printf("\n\n\t\tYou have not purchased any items!!\n\n\t\tRedirecting to the cart....");
        printf("\n\n\t\tPress any key to continue...");
        getch();
        addToCart();
    }
    else
    {
        system("cls");
        file=fopen("addtocart.txt","r");
        billFile=fopen("bill.txt","a");
        while(fscanf(file,"%s %s %s %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity)!=EOF)
        {
            total=item.itemRate*item.itemQuantity;
            fprintf(billFile,"%s %s %s %i %i %i\n",item.itemId,item.itemName,item.itemCategory,item.itemRate,item.itemQuantity,total);
        }
        fclose(file);
        fclose(billFile);
        file=fopen("addtocart.txt","w");
        fclose(file);
        if((file=fopen("itemRecordsDB.txt","r"))==NULL)
        {
            gotoxy(10,3);
            printf("\n\n\t\tNO RECORDS!!\n");
        }
        else
        {
            gotoxy(0,4);
            currentUser=fopen("currentUser.txt","r");
            while(fscanf(currentUser,"%s %s\n ",userName,customerCity)!=EOF)
            {
                strcpy(usernow,userName);
                printf("User Name : %s\tAddress : %s",userName,customerCity);
            }
            printf("\t\t\t\t\t\t%s",ctime(&t));
            gotoxy(0,6);
            printf("Bill Number :");
            for(j=0; j<2; j++)
            {
                billNumber[j]=rand();
                printf("%d",billNumber[j]);
            }
            gotoxy(0,8);
            for(index=0; index<120; index++)
            {
                printf("\xdb");
            }
            gotoxy(5,9);
            printf("Item ID");
            gotoxy(25,9);
            printf("Item Name");
            gotoxy(40,9);
            printf("Item Category");
            gotoxy(60,9);
            printf("Item Rate");
            gotoxy(80,9);
            printf("Item Quantity");
            gotoxy(100,9);
            printf("Total\n");
            for(index=0; index<120; index++)
            {
                printf("\xdb");
            }
            position=11;
            billFile=fopen("bill.txt","r");
            while(fscanf(billFile,"%s %s %s %i %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity,&total)!=EOF)
            {
                gotoxy(5,position);
                printf("%s",item.itemId);
                gotoxy(25,position);
                printf("%s",item.itemName);
                gotoxy(40,position);
                printf("%s",item.itemCategory);
                gotoxy(60,position);
                printf("%i",item.itemRate);
                gotoxy(80,position);
                printf("%i",item.itemQuantity);
                gotoxy(100,position);
                printf("%i",total);
                position++;
                grandtotal=grandtotal+total;
            }
            printf("\n");
            gotoxy(80,position++);
            printf("        GRAND TOTAL=%i",grandtotal);
            printf("\n");
            for(index=0; index<120; index++)
                printf("\xdb");

            billFile=fopen("bill.txt","r");
            freopen("OUTPUT.txt","w",stdout);
            currentUser=fopen("currentUser.txt","r");
            printf("\n\n\n\n\n");
            while(fscanf(currentUser,"%s %s\n",userName,customerCity)!=EOF)
            {
                printf("User Name : %s\t\t\tAddress : %s",userName,customerCity);
            }
            printf("   \t\t%s",ctime(&t));
            printf("\n");
            printf("Bill Number :");
            for(j=0; j<2; j++)
            {
                printf("%d",billNumber[j]);
            }
            printf("\n\n");
            for(index=0; index<100; index++)
                printf("-");
            printf("\nItem ID");
            printf("\t\tItem Name");
            printf("\tItem Category");
            printf("\t\tItem Rate");
            printf("\tItem Quantity");
            printf("       Total\n");
            for(index=0; index<100; index++)
                printf("-");
            billFile=fopen("bill.txt","r");
            while(fscanf(billFile,"%s %s %s %i %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity,&total)!=EOF)
            {
                printf("\n%s\t\t",item.itemId);
                printf("%s\t\t",item.itemName);
                printf("%s\t\t\t",item.itemCategory);
                printf("%i\t\t",item.itemRate);
                printf("%i\t\t",item.itemQuantity);
                printf("%i\t",total);
            }
            printf("\n\n\t\t\t\t\t\t\t\t\t GRAND TOTAL=%i",grandtotal);
            printf("\n");
            for(index=0; index<100; index++)
                printf("-");
            fclose(stdout);

            freopen("CONSOLIDATE.txt","a",stdout);
            currentUser=fopen("currentUser.txt","r");
            printf("\n\n\n\n\n");
            while(fscanf(currentUser,"%s %s\n",userName,customerCity)!=EOF)
            {
                printf("User Name : %s\t\tAddress : %s",userName,customerCity);
            }
            printf("   \t\t%s",ctime(&t));
            printf("\n");
            printf("Bill Number :");
            for(j=0; j<2; j++)
            {
                printf("%d",billNumber[j]);
            }
            printf("\n\n");
            for(index=0; index<100; index++)
                printf("-");
            printf("\nItem ID");
            printf("\t\tItem Name");
            printf("\tItem Category");
            printf("\t\t    Item Rate");
            printf("\tItem Quantity");
            printf("       Total\n");
            for(index=0; index<100; index++)
                printf("-");
            billFile=fopen("bill.txt","r");
            while(fscanf(billFile,"%s %s %s %i %i %i\n",item.itemId,item.itemName,item.itemCategory,&item.itemRate,&item.itemQuantity,&total)!=EOF)
            {
                printf("\n%s\t\t",item.itemId);
                printf("%s\t\t",item.itemName);
                printf("%s\t\t\t",item.itemCategory);
                printf("%i\t\t",item.itemRate);
                printf("%i\t\t",item.itemQuantity);
                printf("%i\t",total);
            }
            printf("\n\n\t\t\t\t\t\t\t\t\t GRAND TOTAL=%i",grandtotal);
            printf("\n");
            for(index=0; index<100; index++)
                printf("-");
            fclose(stdout);
            getch();
        }
        fclose(billFile);
        fclose(currentUser);
        sourceFile=fopen("customerRecordsDB.txt","r");
        destinationFile=fopen("temporaryCustomerDBFile.txt","w");
        if(sourceFile=fopen("customerRecordsDB.txt","r")!=NULL)
        {
            sourceFile=fopen("customerRecordsDB.txt","r");
            while(fscanf(sourceFile,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,&customer.CustomerCredit)!=EOF)
            {
                if(strcmp(customer.customerUserName,usernow)==0)
                {
                    fprintf(destinationFile,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,customer.CustomerCredit+1);
                }
                else
                {
                    fprintf(destinationFile,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,customer.CustomerCredit);
                }
            }
        }
        fclose(sourceFile);
        fclose(destinationFile);

        sourceFile=fopen("customerRecordsDB.txt","w");
        fclose(sourceFile);
        destinationFile=fopen("temporaryCustomerDBFile.txt","r");
        while(fscanf(destinationFile,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,&customer.CustomerCredit)!=EOF)
        {
            sourceFile=fopen("customerRecordsDB.txt","a+");
            fprintf(sourceFile,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,customer.CustomerCredit);
        }
        fclose(sourceFile);
        fclose(destinationFile);

        destinationFile=fopen("temporaryCustomerDBFile.txt","w");
        fclose(destinationFile);
        file=fopen("addtocart.txt","w");
        fclose(file);
        billFile=fopen("bill.txt","w");
        fclose(billFile);
        currentUser=fopen("currentUser.txt","w");
        fclose(currentUser);
        printf("\n\n\n\nThe Bill is Printed!!");
        getch();
        exit(0);
    }
}

void managementLoginPage()
{
    int index=0;
    char userName[50],character=' ';
    char passWord[50],itemId[10];
    char user[50]="manager";
    char pass[50]="mint";
    system("cls");
    printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    printf("\n\n    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb MANAGEMENT LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf("\n\n                          USERNAME:-");
    scanf("%s",&userName);
    printf("\n                          PASSWORD:-");
    int accepted=0;
    do
    {
        index=0;
        do
        {
            passWord[index]=getch();
            character=passWord[index];
            if(character==13)
            {
                accepted=1;
                break;
            }
            else if(character==8||character==32||character==9)
            {
                printf("\n\n\t\tYour have entered Invalid Password Format!!");
                printf("\n\n\t\tThe password must contain only Characters [A-Z a-z] and Numbers [0-9]\n and any Special Characters with No Spaces!!");
                printf("\n\t\tPress any key to go back and try again...");
                break;
            }
            else
            {
                printf("*");
            }
            index++;
        }
        while(index<20);
    }
    while(accepted==0);
    passWord[index]='\0';

    index=0;
    if(strcmp(userName,"manager")==0 && strcmp(passWord,"mint")==0)
    {
        printf("\n\n\n\tWELCOME TO ABI SHOPPING MALL !!!! LOGIN IS SUCCESSFUL");
        printf("\n\n\tSYSTEM IS LOADING. PLEASE WAIT...");
        for(index=0; index<3; index++)
        {
            printf(".");
            Sleep(500);
        }
        printf("\n\n\n\t\tPress any key to continue...");
        getch();
        managementMenuPage();
    }
    else
    {
        printf("\n\n\n\t\tSORRY !!!!  INVALID LOGIN CREDENTIALS\n\t\t     LOGIN IS UNSUCCESSFUL...");
        printf("\n\n\t\tPress any Key to go back to login Window");
        getch();
    }
    system("cls");
}

void managementMenuPage()
{
    int choice;
    do
    {
        system("cls");
        printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
        printf("\n\t\tEnter [1] To View All Customers' Details");
        printf("\n\t\tEnter [2] To View Bill Statistics");
        printf("\n\t\tEnter [3] To View All Items");
        printf("\n\t\tEnter [4] To Exit!");
        printf("\n\n\t\tEnter your choice[1-4]");
        scanf("%i", &choice);
        switch(choice)
        {
        case 1:
            customerDetails();
            break;
        case 2:
            billStatistics();
            break;
        case 3:
            displayItemPage();
            break;
        case 4:
            printf("\n\n\tPress any Key to go to the Login Page");
            break;
        default:
            printf("\n\n\t\tInvalid Choice!!");
            printf("\n\n\tPress any Key to continue to the Management Menu");
            getch();
            managementMenuPage();
            break;
        }
        system("cls");
    }
    while(choice!=4);
}

void customerDetails()
{
    int index,position;
    FILE *file;
    system("cls");
    printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    file=fopen("customerRecordsDB.txt","r");
    if(file!=NULL)
    {
        gotoxy(0,5);
        for(index=0; index<70; index++)
        {
            printf("\xdb");
        }

        gotoxy(5,6);
        printf("Customer Name");
        gotoxy(25,6);
        printf("Customer Address");
        gotoxy(50,6);
        printf("Customer Credit");
        printf("\n");
        for(index=0; index<70; index++)
        {
            printf("\xdb");
        }
        position=8;
        file=fopen("customerRecordsDB.txt","r");
        while(fscanf(file,"%s %s %s %i\n",customer.customerUserName,customer.passWord,customer.customerCity,&customer.CustomerCredit)!=EOF)
        {
            gotoxy(5,position);
            printf("%s",customer.customerUserName);
            gotoxy(25,position);
            printf("%s",customer.customerCity);
            gotoxy(50,position);
            printf("%i",customer.CustomerCredit);
            position++;
        }
        printf("\n");
        for(index=0; index<70; index++)
            printf("\xdb");
    }
    else
    {
        printf("No Records Found!!\n");
    }
    fclose(file);
    printf("\n\n\t\tPress any key to Continue....");
    getch();
}

void billStatistics()
{
    char character;
    FILE *file;
    system("cls");
    printf("\n\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ABI SHOPPING MALL - STOCK MANAGEMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n");
    file=fopen("CONSOLIDATE.txt","r");
    if(file!=NULL)
    {
        character=fgetc(file);
        while (character!=EOF)
        {
            printf("%c",character);
            character=fgetc(file);
        }
    }
    else
    {
        printf("\n\n\t\tNo Records Found!!");
    }
    printf("\n\n\t\tPress any key to Continue....");
    getch();
}
