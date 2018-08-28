// swapping two variables without using 3rd 

# include<stdio.h>

void swap(int a,int b)
{
   a=a+b;
   b=a-b;
   a=a-b;

 printf("The values after swapping : a = %d and b = %d",a,b); 

  
}  

void main()
{
 int a;int b;

 printf("Enter two numbers : ");
 scanf("%d %d",&a,&b);

 printf("The values before swapping : a = %d and b = %d \n",a,b); 
 swap(a,b);

} 
