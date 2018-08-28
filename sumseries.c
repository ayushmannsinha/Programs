//Print the sum series upto a number

# include<stdio.h>

void sum(int n)
{
 int c=0,i;
 
 		for(i=0;i<=n;i++)
 		  {
 				c=c+i;
 				
 		   printf("%d  ",c);
 		  
 		  }
}		  

void main()
{
 int n;
  
  printf("Enter a number :");
  scanf("%d",&n);
  
  printf("The sum series upto %d is :",n);
  sum(n);
  
}   
