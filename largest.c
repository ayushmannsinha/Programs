/*print largest number in an array */

# include<stdio.h>

double arr[50];
int n,i,largest ; 

int main()
 {
  //number of elements
  
  printf("Enter the number of elements :");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)        //elements in array
     {printf("Element ");
      scanf("%lf",&arr[i]);
      }
 //scanning largest element
     
    largest = arr[0];
    
    for(i=0;i<n;i++)
       {
        if (largest<arr[i]);
          { 
            largest = arr[i];
           }
        } 
   printf("The largest element is %ls",&largest);     
   return largest;
 }         
