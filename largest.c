// largest of 3 numbers

# include<stdio.h>

int a,b,c,n;

void main()
{
 //entering numbers
 
 printf("Enter three numbers :");
 scanf("%d \n %d \n %d",&a,&b,&c);
 
 if(a>b && a>c)
   {
    printf(" %d is largest \n",a);
    }
 else if(b>c)
   {
    printf("  %d is largest \n",b);
    }
 else if(c>b)
   {
    printf("  %d is largest \n",c);
    }      
 else
   {
    printf("\n The numbers are equal. LOL:) \n");
    }
}         
