
#include <stdio.h>

int main()
{
   int row=6;
   int col=5;
   
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<=i;j++)
       {
               printf(" ");
       }
       for(int j=0;j<2*row-(2*i+1);j++)
       {
               printf("*");
       }
       for(int j=0;j<=i;j++)
       {
               printf(" ");
       }
       printf("\n");
   }

    return 0;
}
