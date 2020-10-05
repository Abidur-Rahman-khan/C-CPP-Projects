#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
float math;
float physics;
float cse;
float english;
float ged;
float total;
float avg;
float per;


    printf("\t\t\t\t\t Welcome to CGPA system!\n\n");

    printf("================<<<<<<<<<<<<<<<<<<<<<<<<<< Enter your mark one by one >>>>>>>>>>>>>>>>>>>>>================== \n\n");

    printf("Enter your math mark:");
    scanf("%f", &math);                                                                     //if  else conditions for math
     if (math>100 || math<0)
      printf("invalid mark \n");
        else if(math>=80 && math<=100)
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
        else
      printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");

    printf("Enter your physics mark :");
    scanf("%f", &physics);
    if (physics>100 || physics<0)                                                      //if  else conditions for physics
      printf("invalid mark \n");
        else if(physics>=80 && physics<=100)
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
        else
      printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");

    printf("Enter your cse mark:");
    scanf("%f", &cse);
    if (cse>100 || cse<0)                                                               //if  else conditions for cse
      printf("invalid mark \n");
        else if(cse>=80 && cse<=100)
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
        else
      printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");

    printf("Enter you english mark :");
    scanf("%f", &english);
    if (english>100 || english<0)                                                    //if  else conditions for english
      printf("invalid mark \n");
        else if(english>=80 && english<=100)
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
        else
      printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");


    printf("Enter your ged mark:");
    scanf("%f", &ged);                                                                     //if  else conditions for ged
     if (ged>100 || ged<0)
      printf("invalid mark \n");
        else if(ged>=80 && ged<=100)
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
        else
      printf("latter grade: F , grade point: 0.0 & remarks : fail & you need retake \n\n");

    total= math+physics+cse+english+ged;
    printf("your total marks is : %.2f\n", total);
    avg=total/5;
    printf("\nAverage=%0.2f\n",avg);
    per= (total/500)*100;
    printf("total percentage : %.2f\n",per);
      if(per>=80 && per<=100)
  {
     printf("\nYour CGPA=4.0");
     printf("\n Grade:A+ & Remark: Outstanding\n");
  }
  else if(per>=75 && per<=80)
  {
      printf("\nYour CGPA=3.75");
      printf("\nGrade:A & Remark: Excellent\n");
  }
  else if(per>=70 && per<=75)
  {
      printf("\nYour CGPA=3.50");
      printf("\nGrade:A- & Remark: Very Good\n");
  }
  else if(per>=65 && per<=70)
  {
      printf("\nYour CGPA=3.25");
      printf("\nGrade:B+ & Remark: Good\n");
  }
  else if(per>=60 && per<=65)
  {
      printf("\nYour CGPA=3.0");
      printf("\nGrade:B & Remark: Satisfactory\n");
  }
  else if(per>=55 && per<=60)
  {
      printf("\nYour CGPA=2.75");
      printf("\ngrade:B- & Remarks: Above Average\n");
  }
  else if(per>=50 && per<=55)
  {
      printf("\nYour CGPA=2.50");
      printf("\nGrade:C+ & Remarks: Average\n");
  }
  else if(per>=45 && per<=50)
  {
      printf("\nYour CGPA=2.25");
      printf("\nGrade:C 7 Remarks: Below Average\n");

  }
  else if(per>=40 && per<=45)
  {
      printf("\nYour CGPA=2.0");
      printf("\nGrade:D & Remark: Pass\n");
  }
  else if(per>=0 && per<40)
  {
      printf("\nYour CGPA=0.0");
      printf("\nGrade:F & Remarks: Fail\n");
  }

}
