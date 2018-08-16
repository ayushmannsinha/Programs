// Union of two sets

# include<stdio.h>

int i,j,c=0,l=0,n,m,a[20],b[20],u[20];

void main()
{
 // Number of Elements

 printf("Enter the number of elements of Set A :");
 scanf("%d",&m);
 printf("Enter the number of elements of Set B :");
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

 // storing element of set A in U
 
 for(i=1;i<=m;i++)
    { 
     c=0;
     for(j=1;j<=n;j++)
        {
         if(a[i]==b[j])
           {
            c++;
            }
         }
         if(c==0)
           {
            u[l++]=a[i];
            } 
     }       
     
  // elements of set A and B being checked
     
  for(i=1;i<=m;i++)
    { 
     c=0;
     for(j=1;j<=n;j++)
        {
         if(b[i]==u[j])
           {
            c++;
            }
         }
         if(c==0)
           {
            u[l++]=b[i];
            } 
     }           
           
  // Printing Output      
           
  printf("\n The union of Set A and B is :\n");
  for(i=0;i<l;i++)
     {
      printf("%d ",u[i]);
      }
}
