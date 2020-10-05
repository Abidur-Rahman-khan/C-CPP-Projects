/*
 ============================================================================
 Name        : 5.c
 Author      : Md. Abdullah Ibna Harun
 Version     : 3.5
 Copyright   : (c)2019 MD. Abdullah Ibna Harun All Rights Reserved .
 Description : Cgpa sys. in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void cgpa_sys();
void calc();

int main()
{
    printf("\n\n");
    calc();
}
void cgpa_sys()
{
    float math;
    float physics;
    float cse;
    float english;
    float ged;
    float total;
    float avg;
    float per;
    float temp=0;

    system("cls");

    printf("\t\t\t\t\t Welcome to CGPA calculate system!\n\n");

    printf("================<<<<<<<<<<<<<<<<<<<<<<<<<< Enter your mark one by one >>>>>>>>>>>>>>>>>>>>>================== \n\n");
    system("color B");
    printf("Enter your math mark:");
    scanf("%f", &temp);                                                                     //if  else conditions for math
    if (temp<=100 && temp>=0)
    {
        math=temp;
        printf("#\t");
        //printf("invalid mark \n");
        if(math>=80 && math<=100)
            printf("latter grade: A+ , grade point: 4.0 & remarks : first class\n\n");
        else if(math>=75 && math<=79)
            printf("latter grade: A , grade point: 3.75 & remarks : first class\n\n");
        else if(math>=70 && math<=74)
            printf("latter grade: A- , grade point: 3.50 & remarks : first class\n\n");
        else if(math>=65 && math<=69)
            printf("latter grade: B+ ,grade point: 3.25 & remarks : first class\n\n");
        else if(math>=60 && math<=64)
            printf("latter grade: B , grade point: 3.0 & remarks : first class\n\n");
        else if(math>=55 && math<=59)
            printf("latter grade: B- , grade point: 2.75 & remarks : Second class\n\n");
        else if(math>=50 && math<=54)
            printf("latter grade: C+ , grade point: 2.50 & remarks : Second Class\n\n");
        else if(math>=45 && math<=49)
            printf("latter grade: C , grade point: 2.25 & remarks : Second Class upper\n\n");
        else if(math>=40 && math<=44)
            printf("latter grade: D , grade point: 2.0 & remarks : third class\n\n");
        else if(math<=39 && math>=0)
            printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");
        else
            math=0;
    }
    temp=0;

    printf("Enter your physics mark :");
    scanf("%f", &temp);
    if (temp<=100 && temp>=0)                                                      //if  else conditions for physics
    {
        physics=temp;
        printf("#\t");
        //printf("invalid mark \n");
        if(physics>=80 && physics<=100)
            printf("latter grade: A+ , grade point: 4.0 & remarks : first class\n\n");
        else if(physics>=75 && physics<=79)
            printf("latter grade: A , grade point: 3.75 & remarks : first class\n\n");
        else if(physics>=70 && physics<=74)
            printf("latter grade: A- , grade point: 3.50 & remarks : first class\n\n");
        else if(physics>=65 && physics<=69)
            printf("latter grade: B+ ,grade point: 3.25 & remarks : first class\n\n");
        else if(physics>=60 && physics<=64)
            printf("latter grade: B , grade point: 3.0 & remarks : first class\n\n");
        else if(physics>=55 && physics<=59)
            printf("latter grade: B- , grade point: 2.75 & remarks : Second class\n\n");
        else if(physics>=50 && physics<=54)
            printf("latter grade: C+ , grade point: 2.50 & remarks : Second Class\n\n");
        else if(physics>=45 && physics<=49)
            printf("latter grade: C , grade point: 2.25 & remarks : Second Class upper\n\n");
        else if(physics>=40 && physics<=44)
            printf("latter grade: D , grade point: 2.0 & remarks : third class\n\n");
        else if(physics<=39 && physics>=0)
            printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");
        else
            physics=0;
    }
    temp=0;

    printf("Enter your cse mark:");
    scanf("%f", &temp);
    if (temp<=100 && temp>=0)                                                               //if  else conditions for cse
    {
        cse=temp;
        printf("#\t");
        //printf("invalid mark \n");
        if(cse>=80 && cse<=100)
            printf("latter grade: A+ , grade point: 4.0 & remarks : first class\n\n");
        else if(cse>=75 && cse<=79)
            printf("latter grade: A , grade point: 3.75 & remarks : first class\n\n");
        else if(cse>=70 && cse<=74)
            printf("latter grade: A- , grade point: 3.50 & remarks : first class\n\n");
        else if(cse>=65 && cse<=69)
            printf("latter grade: B+ ,grade point: 3.25 & remarks : first class\n\n");
        else if(cse>=60 && cse<=64)
            printf("latter grade: B , grade point: 3.0 & remarks : first class\n\n");
        else if(cse>=55 && cse<=59)
            printf("latter grade: B- , grade point: 2.75 & remarks : Second class\n\n");
        else if(cse>=50 && cse<=54)
            printf("latter grade: C+ , grade point: 2.50 & remarks : Second Class\n\n");
        else if(cse>=45 && cse<=49)
            printf("latter grade: C , grade point: 2.25 & remarks : Second Class upper\n\n");
        else if(cse>=40 && cse<=44)
            printf("latter grade: D , grade point: 2.0 & remarks : third class\n\n");
        else if(cse<=39 && cse>=0)
            printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");
        else
            cse=0;
    }
    temp=0;

    printf("Enter you english mark :");
    scanf("%f", &temp);
    if (temp<=100 && temp>=0)                                                    //if  else conditions for english
    {
        english=temp;
        printf("#\t");
        //printf("invalid mark \n");
        if(english>=80 && english<=100)
            printf("latter grade: A+ , grade point: 4.0 & remarks : first class\n\n");
        else if(english>=75 && english<=79)
            printf("latter grade: A , grade point: 3.75 & remarks : first class\n\n");
        else if(english>=70 && english<=74)
            printf("latter grade: A- , grade point: 3.50 & remarks : first class\n\n");
        else if(english>=65 && english<=69)
            printf("latter grade: B+ ,grade point: 3.25 & remarks : first class\n\n");
        else if(english>=60 && english<=64)
            printf("latter grade: B , grade point: 3.0 & remarks : first class\n\n");
        else if(english>=55 && english<=59)
            printf("latter grade: B- , grade point: 2.75 & remarks : Second class\n\n");
        else if(english>=50 && english<=54)
            printf("latter grade: C+ , grade point: 2.50 & remarks : Second Class\n\n");
        else if(english>=45 && english<=49)
            printf("latter grade: C , grade point: 2.25 & remarks : Second Class upper\n\n");
        else if(english>=40 && english<=44)
            printf("latter grade: D , grade point: 2.0 & remarks : third class\n\n");
        else if(english<=39 && english>=0)
            printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");
        else
            english=0;
    }
    temp=0;

    printf("Enter your ged mark:");
    scanf("%f", &temp);
    if (temp<=100 && temp>=0)
    {
        ged=temp;
        printf("#\t");
        //printf("invalid mark \n");                                       //if  else conditions for ged
        if(ged>=80 && ged<=100)
            printf("latter grade: A+ , grade point: 4.0 & remarks : first class\n\n");
        else if(ged>=75 && ged<=79)
            printf("latter grade: A , grade point: 3.75 & remarks : first class\n\n");
        else if(ged>=70 && ged<=74)
            printf("latter grade: A- , grade point: 3.50 & remarks : first class\n\n");
        else if(ged>=65 && ged<=69)
            printf("latter grade: B+ ,grade point: 3.25 & remarks : first class\n\n");
        else if(ged>=60 && ged<=64)
            printf("latter grade: B , grade point: 3.0 & remarks : first class\n\n");
        else if(ged>=55 && ged<=59)
            printf("latter grade: B- , grade point: 2.75 & remarks : Second class\n\n");
        else if(ged>=50 && ged<=54)
            printf("latter grade: C+ , grade point: 2.50 & remarks : Second Class\n\n");
        else if(ged>=45 && ged<=49)
            printf("latter grade: C , grade point: 2.25 & remarks : Second Class upper\n\n");
        else if(ged>=40 && ged<=44)
            printf("latter grade: D , grade point: 2.0 & remarks : third class\n\n");
        else if(ged<=39 && ged>=0)
            printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");
        else
            ged=0;
    }
    temp=0;

    // calculation
    printf("\t\t#=========================RESULT:=============================#\n\n\n");
    system("color A");
    total= math+physics+cse+english+ged;
    printf("\n\t\t\tyour total marks is : %.2f\n", total);
    avg=total/5;
    printf("\n\t\tAverage=%0.2f\n",avg);
    per= (total/500)*100;
    printf("\n\t\ttotal percentage : %.2f\n",per);
    if(per>=80 && per<=100)
    {
        printf("\n\t\tYour CGPA=4.0");
        printf("\n\t\tGrade:A+ & Remark: Outstanding\n");
    }
    else if(per>=75 && per<=80)
    {
        printf("\n\t\tYour CGPA=3.75");
        printf("\n\t\tGrade:A & Remark: Excellent\n");
    }
    else if(per>=70 && per<=75)
    {
        printf("\n\t\tYour CGPA=3.50");
        printf("\n\t\tGrade:A- & Remark: Very Good\n");
    }
    else if(per>=65 && per<=70)
    {
        printf("\n\t\tYour CGPA=3.25");
        printf("\n\t\tGrade:B+ & Remark: Good\n");
    }
    else if(per>=60 && per<=65)
    {
        printf("\n\t\tYour CGPA=3.0");
        printf("\n\t\tGrade:B & Remark: Satisfactory\n");
    }
    else if(per>=55 && per<=60)
    {
        printf("\n\t\tYour CGPA=2.75");
        printf("\n\t\tgrade:B- & Remarks: Above Average\n");
    }
    else if(per>=50 && per<=55)
    {
        printf("\n\t\tYour CGPA=2.50");
        printf("\n\t\tGrade:C+ & Remarks: Average\n");
    }
    else if(per>=45 && per<=50)
    {
        printf("\n\t\tYour CGPA=2.25");
        printf("\n\t\tGrade:C & Remarks: Below Average\n");

    }
    else if(per>=40 && per<=45)
    {
        printf("\n\t\tYour CGPA=2.0");
        printf("\n\t\tGrade:D & Remark: Pass\n");
    }
    else if(per>=0 && per<40)
    {
        printf("\n\t\tYour CGPA=0.0");
        printf("\n\t\tGrade:F & Remarks: Fail\n");
    }
    printf("\n\n\t\tPress any key to continue... ");
    getch();
    system("CLS");
    calc();
}

void calc()
{
    int n;
    system("cls && color C");
    printf("\n\n\t\t\t\t\t Welcome to CGPA system!\n\n");
    printf("\n\t\tDo you want CGPA calculation\n\t\tYes = 1\n\t\tNo  = 0\n\t\t==========> ?:");
    scanf("%d",&n);
    if(n==1)
    {
        cgpa_sys();
    }
    else if(n>=1)
    {
        system("cls && color 4");
        printf("\n\n\t\t\tInvalid  keyword\n\a");
        printf("\n\n\t\tPress any key to continue... ");
        getch();
        calc();
    }
    else if (n==0)
    {
        exit(0);
    }
}
