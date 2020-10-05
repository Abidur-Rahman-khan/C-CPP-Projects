#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>


int main()
{
   int a = 20 , b = 10, c , d  , e ;

    printf(" value of c :");
      scanf("%d" , &c);
    printf(" value of d :");
      scanf("%d" , &d);

   e = (a+b) * c/d;
   printf(" value of (a+b) * c/d : %d\n", e);

   e = (a+b) * c /d;
   printf(" value of (a+b) * c/d : %d\n", e);

   e = (a+b) * (c/d);
   printf(" value of (a+b) * c/d : %d\n", e);

   e = a + (b*c) / d;
   printf(" value of (a+b) * c/d : %d\n", e);

      return 0 ;


}
