// printing tables

#include<stdio.h>

int i,j,k;

int main()
{ 
 
 
 for(i=2;i<=10;i++)
    {
     printf("Table of %d \n",i);
     for(j=1;j<=10;j++)
        {
         
         k=i*j;
          
         printf("%d * %d = %d \n",i,j,k);
         printf("\n");
         }
     }      

return 0;     
}      
