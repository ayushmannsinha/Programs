// To check if a number is prime or not

# include<stdio.h>

void prime(int n)
{
 int i,c=0;
 
 	for(i=1;i<=n;i++)
 	  {
 	   	if(n%i==0)
 	   	 {
	       		c++;
	       	 }
	   }    	  	
	if(c==2)
	 { 
      	     printf("The number %d is prime.",n);
      	 }
      	else
      	  {
      	     printf("The number %d is not prime.",n);
      	  }       	 
}

void main()
{
 int n;
 
  printf("Enter a number :");
  scanf("%d",&n);
  
  prime(n);
}  	       	
