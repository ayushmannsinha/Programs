//set difference of 2 sets

#include<stdio.h>

int a[10],b[10],diff[20],i,j,m,n,c=0,l=0;

void main()
{
 printf("\n Ayushmann - 1702913038 \n");
 
 //number of elements in sets
 
 printf("Number of elements in Set A :");
 scanf("%d",&m);
 printf("Number of elements in Set B :");
 scanf("%d",&n);
 
 //entry of elements
 
 for(i=1;i<=m;i++)
    {
     printf("Element %d of Set A :",i);
     scanf("%d",&a[i]);
     }
 
 for(j=1;j<=n;j++)
    {
     printf("Element %d of Set B :",j);
     scanf("%d&",&b[j]);
     }

 //comparision of set A and B

 for(i=0;i<m;i++)
    {
     c=0;
     for(j=0;j<n;j++)
        {
         if(a[i]==b[j] && a[i]!=diff[j])
            c++;
         }
     if(c==0)
       diff[l++]=a[i];
     }

 //printing output

  printf("\n");
  for(i=0;i<l;i++)
     {
      printf("%d ",diff[i]);
      }
  printf("\n");
}
