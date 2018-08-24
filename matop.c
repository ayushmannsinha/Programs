# include <stdio.h>

int i,j,n,m,k;
int a[10][10],b[10][10],sum[10][10],sub[10][10],multi[10][10];

void main()
{
 //number of rows and columns
 printf("Enter the number of rows :");
 scanf("%d",&m);
 printf("Enter the number of columns :");
 scanf("%d",&n);
 //entry in arrays
 //in a
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         printf("Element (%d,%d) for a :",i,j);
         scanf("%d",&a[i][j]);
         }
     } 
 //in b
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         printf("Element (%d,%d) for b :",i,j);
         scanf("%d",&b[i][j]);
         }
     }            
 //addition
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         sum[i][j]=a[i][j]+b[i][j];
         }
     } 
 //printing summation
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         printf("%d ",sum[i][j]);
         }
      printf("\n");    
     }
 //subtraction     
 for(i=1;i<=m;i++)
     {for(j=1;j<=n;j++)
         {
          sub[i][j]=a[i][j]-b[i][j];
          }
      } 
 //printing subtraction
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         printf("%d ",sub[i][j]);
         }
      printf("\n");    
     }
 //multiplication
 for(i=1;i<=m;i++) 
    {for(j=1;j<=n;j++)
        {for(k=0;k<=m;k++)
            {
             multi[i][j]+=a[i][j]*b[i][j];
             }
         }    
     }
 //printing multiplication
 for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
        {
         printf("%d ",multi[i][j]);
         }
      printf("\n");    
     }
     
}     
