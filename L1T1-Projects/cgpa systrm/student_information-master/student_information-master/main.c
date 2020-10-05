#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>

struct
{
    char firstname[20];
    char lastname[20];
    char Department[5];
    char Address[80];
    char batch[10];
    int roll;
    int phone_number;
} student;
void loading()
{
    int i,j;
    system("color 0a");
    printf("\n\n\n\t\t\t\tPlease wait while loading\n\n");
    char a=177, b=219;
    printf("\t\t\t\t");
    for ( i=0; i<=15; i++)
        printf("%c",a);
    printf("\r");
    printf("\t\t\t\t");
    for ( i=0; i<=15; i++)
    {
        printf("%c",b);
        for ( j=0; j<=1e8; j++); //You can also use sleep function instead of for loop
    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}


int main()
{
    int i,j;
    int flag,continu, choice,shift,found,length,rollnumber;
    char studentname[20];
    FILE *fp;
    system("color 0e");
    printf("************************************************************\n");
    printf("------------------------------------------------------------\n");

    printf("||\tWELCOME TO STUDENT INFORMATION SYSTEM\t\t  ||\n||\t\t\t\tDepartment of CSE\t  ||\n||\t\t\t\tCBST Mymensingh\t\t  ||\n");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    printf("_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n\n");
lebel1:
    printf("#press 1 to add student information\n");
    printf("#press 2 to search student information by first name\n");
    printf("#press 3 to search student information by roll number\n");
    printf("#press 4 to Exit\n\n");
    printf("Enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
lebel2:
        printf("\n\tEnter student details:\n");
        printf("First name=");
        scanf("%s",student.firstname);
        printf("\nlast name=");
        scanf("%s",student.lastname);
        printf("\nRoll=");
        scanf("%d",&student.roll);
        printf("\nDepartment=");
        scanf("%s",student.Department);
        printf("\nBatch=");
        scanf("%s",student.batch);
        printf("\nphone number=");
        scanf("%d",&student.phone_number);
        printf("Address=");
        scanf("%s",student.Address);
        fp=
            fopen
            (
                "studentfile.txt"
                ,
                "a+"
            );
        fprintf(fp,"\n%s\t%s\t%d\t%s\t%s\t%d\t%s",student.firstname,student.lastname,student.roll,student.Department,student.batch,student.phone_number,student.Address);
        fclose(fp);
        printf("\nstudent record added successfully......\n\n\n");
        printf("#press 1 to add more student information\n");
        printf("#press 2 to go main menu\n");
        printf("#press 3 to exit the program\n");
        scanf("%d",&shift);
        if(shift==1)
            goto lebel2;
        if(shift==2)
            goto lebel1;
        if (shift==3)
            break;
        if(shift!=1&&2&&3)
            printf("Existing.....\n");
        break;

    case 2:
lebel3:
        printf("Enter student first name: ");
        scanf("%s",&studentname);
        printf("searching record with studentname=%s.\n",studentname);

        loading();
        found=0;
        if((fp=
                    fopen("studentfile.txt","r"))==NULL)
        {
            printf("             !The file is empty\n");
        }
        else
        {
            while
            (!feof(fp)&&found==0)
                fscanf(fp,"\n%s\t%s\t%d\t%s\t%s\t%d\t%s",student.firstname,student.lastname,&student.roll,student.Department,student.batch,&student.phone_number,student.Address);
            length=strlen(student.firstname);
            if
            (student.firstname[length]==studentname[length])
                found=1;
        }
        if(found)
        {
            printf("The record is found\n\n");
            printf("------------------------------\n");
            printf("Information about the student\n");
            printf("________________________________\n");
            printf("\t\tFirst name=%s\n\t\tLast name=%s\n\t\tRoll    =%d\n\t\tDepartmentt=%s\n\t\tBatch    =%s\n\t\tphone number=%d\n\t\tAddress  =  %s\n",student.firstname,student.lastname,student.roll,student.Department,student.batch,student.phone_number,student.Address);

        }
        else
        {
            printf("              not found\n");
        }
        printf("\n\n\n\n\n\n");
        getchar();
lebel4:
        printf("#press 1 to search another student information\n");
        printf("#press 2 to go main menu\n");
        printf("#press 3 to exit the program\n");
        scanf("%d",&shift);
        if(shift==1)
            goto lebel3;
        if (shift==2)
            goto lebel1;
        if(shift==3)
            break;
        if(shift!=1&&2&&3)
        {
            printf("Enter a valid choice\n");
        }
        goto lebel4;
    case 3:
lebel5:
        printf("Enter Roll number\n");
        scanf("%d",&rollnumber);
        printf("searching record with Roll number=%d.\n",rollnumber);
        loading();
        found=0;
        if((fp=fopen("studentfile.txt","r"))==NULL)
        {
            printf("            opps!! File is empty\n");
        }
        else
        {


            while(!feof(fp)&&found==0)
            {
                fscanf(fp,"\n%s\t%s\t%d\t%s\t%s\t%d\t%s",student.firstname,student.lastname,&student.roll,student.Department,student.batch,&student.phone_number,student.Address);
                if(student.roll==rollnumber)
                    found=1;
            }

        }
        if (found)
        {
            printf("The record is found\n\n");
            printf("------------------------------\n");
            printf("Information about the student\n");
            printf("________________________________\n");
            printf("\t\tFirst name=%s\n\t\tLast name=%s\n\t\tRoll    =%d\n\t\tDepartmentt=%s\n\t\tBatch    =%s\n\t\tphone number=%d\n\t\tAddress  =  %s\n",student.firstname,student.lastname,student.roll,student.Department,student.batch,student.phone_number,student.Address);

        }
        else
        {
            printf("\t\tSorry there is no information about the student\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        getchar();
lebel6:
        printf("1. search more\n2. back to main menu\n3. exit\n");
        scanf("%d",&shift);
        if(shift==1)
            goto lebel5;
        if(shift==2)
            goto lebel1;
        if(shift==3)
            break;
        if(shift!=1&&2&&3)
        {
            printf("sorry you have interred a wrong choice\nplease enter a valid choice\n");
        }
        goto lebel6;
    case 4:
        break;
    default
            :
        printf("wrong choice\n Enter choice again\n");
        goto lebel1;

    }
    getchar();


    return 0;
}
