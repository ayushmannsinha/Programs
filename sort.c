// WAP to impllement bubble sorting on a array

# include <stdio.h> 
# include <stdlib.h>

int arr[10],n,m,i,j,temp;
		
void ascend()
	{					
		for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
					{
						if(arr[j] > arr[j+1])
						  {
							temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						  }
					}
			}
		
		printf("Sorted array in ascending : \n");	
		for(n=0;n<10;n++)
			{ 
				printf("%4d ",arr[n]);
			}			  	
	}				

void descend()
	{					
		for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					{
						if(arr[j] < arr[j+1])
						  {
							temp = arr[j+1];
							arr[j+1] = arr[j];
							arr[j] = temp;
						  }
					}
			}
		
		printf("Sorted array in descending : \n");	
		for(n=0;n<10;n++)
			{ 
				printf("%4d ",arr[n]);
			}			  	
	}
	
void main()
	{
		
		// entry of elements in array
		printf("Enter the elements in array : \n");
		for(n=0;n<10;n++)
			{ 
				printf("Element %d :",n);
				scanf("%d",&arr[n]);
			}
			
		printf("1.ascending \n2.descending \nEnter choice :");
		scanf("%d",&m);
			
		switch(m)
			{
				case 1:
					ascend();
					break;
				case 2:
					descend();
					break;
				default:
					printf("Enter a valid choice ... LOL");
			}				
	}
			 	
