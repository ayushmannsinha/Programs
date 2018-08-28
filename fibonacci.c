//Print the fibonacci series upto a number

# include<stdio.h>

void fibo(int n)
{
 int a=0,b=1,c,i;
 
 		for(i=1;i<=n-2;i++)
 		  {
 				c = a+b;
 				a=b;b=c;
 				
 		   printf("%d  ",c);
 		  
 		  }
}		  

void main()
{
 int n;
  
  printf("Enter a number :");
  scanf("%d",&n);
  
  printf("The fibonacci Series upto %d is : 0  1  ",n);
  fibo(n);
  
}   
