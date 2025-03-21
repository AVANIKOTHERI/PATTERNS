
#include <stdio.h>

int main()
{
   int row=3;
   int col=5;
   
   for(int i=1;i<row;i++)
   {
       for(int j=1;j<=i;j++)
       {
               printf("%d",i);
       }
       printf("\n");
   }

    return 0;
}
