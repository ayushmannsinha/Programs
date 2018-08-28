// factorial of a number using functions

# include<stdio.h>

void fact(int n)
{
 int fact=1,i;
 
	for(i=1;i<=n;i++)
	  {
	 	fact=i*fact;
	  }	  	 	
	printf("The factorial of a %d is %d",n,fact);
}

void main()
{
int n;  
  
  printf("Enter the number :");
  scanf("%d",&n);
  fact(n);
  
}   	
