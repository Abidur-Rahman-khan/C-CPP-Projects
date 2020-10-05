#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>


int main()

{
    int year ;
    printf("enter year :");
    scanf("%d" , &year );

     if (year%4==0){
        printf("this is leap year\n ");
     }
     else {
        printf(" this is not leap year\n ");
     }
     return 0;
}
