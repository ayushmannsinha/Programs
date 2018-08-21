// sum of digits of 5 digit number

#include<stdio.h>

int n,a,b,sum;

void main()
{
 
 printf("Enter a 5 digit number :\n");
 scanf("%d",&n);
 
 b=n;
 while(n!=0)
    { 
      //sum = 0;
      
      
      a = n % 10;
      n = n / 10; 
      
      sum = sum + a;
     }      
 
 printf("The sum of digits of number %d is :%d \n",b,sum);
 
} 
 
 
 
 
 
 
 
 
 
 
