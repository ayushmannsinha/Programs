// intersection of two sets

# include <stdio.h>

int a[20],b[20],in[20],m,n,i,j,l=0,c=0;

void main()

{
 printf("Enter number of elements in A :");
 scanf("%d",&m);
 printf("Enter number of elements in B :");
 scanf("%d",&n);
 
 for(i=1;i<=m;i++)
    {
     printf("Element %d in A :",i);
     scanf("%d",&a[i]);
     }
 for(j=1;j<=n;j++)
    {
     printf("Element %d in B :",j);
     scanf("%d",&a[j]);
     }
  
  //in[0]=0;
  
  for(i=1;i<=m;i++)
     {
      //c=0;
      for(j=1;j<=n;j++)
         {
          if(a[i]==b[j]&&a[i]!=in[j])
            {
             c++;
             }
          }          
         if(c!=0)
           {
            in[l++]=a[i];
            }
      }
      
  printf("The intersection of A and B is :");
  for(i=1;i<=l;i++)
     {
      printf("%d",in[i]);     
      }
}                                      



























