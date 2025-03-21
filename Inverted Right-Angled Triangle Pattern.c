
#include <stdio.h>

int main()
{
   int row=6;
   int col=5;
   
   for(int i=1;i<=row;i++)
   {
       for(int j=0;j<row-i+1;j++)
       {
               printf("*");
       }
       printf("\n");
   }

    return 0;
}
