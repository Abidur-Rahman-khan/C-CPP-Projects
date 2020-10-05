/**BLOOD DONAR DATABASE & MANAGEMENT SYSTEM**/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <windows.h>

int amt = 300;

FILE *fp;
long int size;
struct donor
{
    char name[10];
    int age;
    char address1[20];
    char address2[20];
    char city[20];
    char phn[12];
    char bloodgrp[4];
    char email[20];
    int id;
};
//minhaj
struct donor b; //Declaration of Structuresn
void putdonor();   //Store the Data in File
//rony
void getdonor();   //Display Data
void donorbyid();
//shaki
void donorbycity();
//rafi
void calamt();     //Calculate Sum to be paid to Donor
//jannat
void menu();       //Display Menu

int main()
{
    int i;
    i=1;
    size=sizeof(b);     //Finding the size of strucutre

    system("cls");
    while(i<=30)
    {
        printf("\n\n\n\n\n\n\n\n\t\t\t\t Initializing.......");
        if(i<20)
        {
            system("cls");
            printf(".");
            printf(".");
            printf(".");
        }
        i++;
    }

    system("cls");
    menu();
    getch();

}

void putdonor()
{
    char a;
    system("cls");
    fp=fopen("BDONOR.txt","a+");    //Opening a Binary File
    if(fp==NULL)
    {
        puts("Cannot Open File");
        exit(0);
    }
    fseek(fp,0,SEEK_END);       //Putting the Pointer at the end of the File
    do
    {
        system("cls");

        printf("\n\t\t\tDonor Info :::::::::::::::::");
        fflush(stdin);
        printf("\n\t Enter Name :- ");
        gets(b.name);
        printf("\n\tEnter Your Age :- ");
        scanf("%d",&b.age);
        fflush(stdin);
        printf("\n\t Enter Ur Donor Id :- ");
        scanf("%d",&b.id);
        printf("\n\t Enter address line 1 :- ");
        fflush(stdin);
        gets(b.address1);
        printf("\n\t Enter address line 2 :- ");
        gets(b.address2);
        printf("\n\t Enter city :- ");
        gets(b.city);
        printf("\n\t Enter Blood group :- ");
        gets(b.bloodgrp);
        printf("\n\t Enter your 10 Digit Mobile Number :- ");
        scanf("%s",b.phn);
        fflush(stdin);
        printf("\n\t Enter your Email id :-");
        scanf("%s",b.email);
        fwrite(&b,size,1,fp);

        printf("\n\tDo You want to add another data\n Enter (Y \\ N)");
        fflush(stdin);
        scanf("%c",&a);
    }
    while(a=='Y'||a=='y');
    fclose(fp);		 //Closing the File
    system("cls");
    menu();
}

void getdonor()
{
    printf("\n\t\t\tDonor Info :::::::::::::::::");
    char bld[4];
    char a='y';
    system("cls");
    fp=fopen("BDONOR.txt","r+");
    if(fp==NULL)
    {
        puts("Cannot Open File");
        exit(0);
    }
    fflush(stdin);
    printf("\n\tEnter the Blood Group: ");
    scanf("%s",bld);
    rewind(fp);

    while(fread(&b,size,1,fp)==1)
    {
        if(a=='Y'||a=='y')
        {
            if(strcmp(b.bloodgrp,bld)==0)      //Mathching the Bloodgroup required with the one's present in Database
            {
                system("cls");
                printf("\n\tName: %s \n\tDonor Id: %d \n\tAge: %d \n\tAddress Line 1: %s \n\tAddress Line 2: %s \n\tCity: %s \n\tPhone No:- %s \n\tEmail: %s \n\tBlood Group: %s \n\n",b.name,b.id,b.age,b.address1,b.address2,b.city,b.phn,b.email,b.bloodgrp);
                printf("\n\n\tSee More(Y / N)");
                fflush(stdin);
                scanf("%c",&a);
            }
        }
    }
    if(a=='n'||a=='N')
    {
        fclose(fp);
        menu();
    }
    else
    {
        printf("\n\n\n\t\t NO MORE RECORDS FOUND.....!!!");
        printf("\n\n Back to Main Menu...");
        //(7000);
        getch();
        fclose(fp);
        menu();
    }
}

void menu()
{
    int choice;
    system("cls");
    printf("\n\n\t\t\t\tBLOOD DONAR DATABASE & MANAGEMENT SYSTEM\n\n\n");
    printf("\t1 Add a new entry\n\n");
    printf("\t2 Search by Blood Group \n\n");
    printf("\t3 Search by Donor Id \n\n");
    printf("\t4 Search by City \n\n");
    printf("\t5 Calculate the amount to be paid to Donor\n\n");
    printf("\t6 Exit the program \n\n");
    printf("\tYour Choice: ");



    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        putdonor();
        break;

    case 2:
        getdonor();
        break;

    case 3:
        donorbyid();
        break;

    case 4:
        donorbycity();
        break;

    case 5:
        calamt();
        break;

    case 6:
        exit(0);

    default:
        system("cls");
        printf("\n\n\t\tYou have entered wrong choice.....!!!");
        //(4000);
        getch();
        fflush(stdin);
        menu();

    }
}


void calamt()
{
    float unit,sum;
    system("cls");
    printf("\n\n\tEnter the unit donated: ");
    scanf("%f",&unit);
    sum= unit*amt;            //Calculating the Amount to be paid
    printf("\n\tAmount paid per Unit = Taka%d\n\n",amt);
    printf("\n\tTotal Amount to be paid = Taka%f\n",sum);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBack....");
    //(7000);
    getch();
    system("cls");
    menu();

}

void donorbyid()
{
    int id;
    char a='y';
    system("cls");
    fp=fopen("BDONOR.txt","r");
    if(fp==NULL)
    {
        puts("Cannot Open File");
        exit(0);
    }
    fflush(stdin);
    printf("\n\tEnter the Donor Id ");
    scanf("%d",&id);
    rewind(fp);

    while(fread(&b,size,1,fp)==1)
    {
        if(a=='Y'||a=='y')
        {
            if(b.id==id)      //Mathching the Bloodgroup required with the one's present in Database
            {
                printf("\n\tName: %s \n\tDonor Id: %d \n\tAge: %d \n\tAddress Line 1: %s \n\tAddress Line 2: %s \n\tCity: %s \n\tPhone No:- %s \n\tEmail: %s \n\tBlood Group: %s\n\n",b.name,b.id,b.age,b.address1,b.address2,b.city,b.phn,b.email,b.bloodgrp);
                printf("\n\n\tSee More(Y / N)");
                fflush(stdin);
                scanf("%c",&a);
            }
        }
    }
    if(a=='n'||a=='N')
    {
        fclose(fp);
        menu();
    }
    else
    {
        printf("\n\n\n\t\t NO MORE RECORDS FOUND.....!!!");
        printf("\n\n Back to Main Menu ......");
        //(7000);
        getch();
        fclose(fp);
        menu();
    }
}


void donorbycity()
{
    char city[20];
    char a='y';
    system("cls");
    fp=fopen("BDONOR.txt","r");
    if(fp==NULL)
    {
        puts("Cannot Open File");
        exit(0);
    }
    fflush(stdin);
    printf("\n\tEnter the City ");
    scanf("%s",city);
    rewind(fp);

    while(fread(&b,size,1,fp)==1)
    {
        if(a=='Y'||a=='y')
        {
            if((strcmp(b.city,city))==0)      //Mathching the Bloodgroup required with the one's present in Database
            {
                printf("\n\tName: %s \n\tDonor Id: %d \n\tAge: %d \n\tAddress Line 1: %s \n\tAddress Line 2: %s \n\tCity: %s \n\tPhone No:- %s \n\tEmail: %s \n\tBlood Group: %s\n\n",b.name,b.id,b.age,b.address1,b.address2,b.city,b.phn,b.email,b.bloodgrp);
                printf("\n\n\tSee More(Y / N)");
                fflush(stdin);
                scanf("%c",&a);
            }
        }
    }
    if(a=='n'||a=='N')
    {
        fclose(fp);
        menu();
    }
    else
    {
        printf("\n\n\n\t\t NO MORE RECORDS FOUND.....!!!");
        printf("\n\n Back to Main...");
        getch();
        //(7000);
        fclose(fp);
        menu();
    }
}

//Floating Point Emulator
void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}
