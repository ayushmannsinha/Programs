//intersection of 2 sets

#include<stdio.h>

int a[10],b[10],in[20],i,j,m,n,c=0,l=0;

void main()
{
 printf(" \n Ayushmann - 1702913038 \n");
  
  //number of elements
  
 printf("Enter number of elements in Set A :");
 scanf("%d",&m);
 printf("Enter number of elements in Set A :");
 scanf("%d",&n);

//Entry of elements

 for(i=1;i<=m;i++)
    {
     printf("Element %d of Set A :",i);
     scanf("%d",&a[i]);
     }
     

 for(j=1;j<=n;j++)
    {
     printf("Element %d of Set B :",j);
     scanf("%d",&b[j]);
     }

//comparision of set A snd B

 for(i=1;i<=m;i++)
    {
     c=0;
     for(j=1;j<=n;j++)
        {    
         if(a[i]==b[j] && a[i]!=in[j])
           {
            c++;
            }
         }   
     if(c!=0)
       {
        in[l++]=a[i];
        }
     }  

//printing output

 printf("Intersection of Set A and B : \n");
 for(i=0;i<l;i++)
    {
     printf("%d ",in[i]);
     }  
 printf("\n");
}

