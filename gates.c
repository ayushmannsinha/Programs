// TO PRINT THE BOOLEAN TABLE OF 'AND','OR' & 'NOT' GATE

# include <stdio.h>
# include <stdlib.h>

int i,j,k,l,m,n;

// OR GATE

void OR()
	{
		printf("Enter number of inputs :");
		scanf("%d",&n);
		
		if(n == 2)
		 {
		  	printf("\n A  B  O \n");
		 }
		else
		 {
		 	printf("\n A  B  C  O \n");
		 }
		
		if(n == 2)   // 2 input or gate
		 {
		 	for(i=0;i<2;i++)
		 	 {
		 	 	for(j=0;j<2;j++)
		 	 	 {
		 	 	  	l = i+j;
		 	 	  	
		 	 	  	if(l>1)
		 	 	       {
		 	 	       	l = 1;
		 	 	       } 	 	  	
		  			printf("\n %d  %d  %d \n",i,j,l);
		  		 }
		  	 }
		 }
		else  // 3 input or gate
		 {	
		 	for(i=0;i<2;i++)
		 	 {
		 	 	for(j=0;j<2;j++)
		 	 	 {
		 	 	  	for(k=0;k<2;k++)
		 	 	  	 {
		 	 	  	 	l = i+j+k;
		 	 	  	 	
		 	 	  	 	if(l>1)
		 	 	  	 	 {
		 	 	  	 	 	l = 1;
		 	 	  	 	 }
		 	 	  	 	printf("\n %d  %d  %d  %d \n",i,j,k,l);
		 	 	  	 }
		 	 	  }
		 	 }
		 }
	}	 

// AND GATE

void AND()
	{
		printf("Enter number of inputs :");
		scanf("%d",&n);
		
		if(n == 2)
		 {
		  	printf("\n A  B  O \n");
		 }
		else
		 {
		 	printf("\n A  B  C  O \n");
		 }
		
		if(n == 2)  // 2 input and gate
		 {
		 	for(i=0;i<2;i++)
		 	 {
		 	 	for(j=0;j<2;j++)
		 	 	 {
		 	 	  	l = i*j;
		 	 	  			
		  			printf("\n %d  %d  %d \n",i,j,l);
		  		 }
		  	 }
		 }
		else // 3 input and gate
		 {	
		 	for(i=0;i<2;i++)
		 	 {
		 	 	for(j=0;j<2;j++)
		 	 	 {
		 	 	  	for(k=0;k<2;k++)
		 	 	  	 {
		 	 	  	 	l = i*j*k;
		 	 	  	 	
		 	 	  	 	printf("\n %d  %d  %d  %d \n",i,j,k,l);
		 	 	  	 }
		 	 	  }
		 	 }
		 }
	}	 	 	  	

//NOT GATE

void NOT()
	{
		printf("\n A  A` \n");
		
		for(i=0;i<2;i++)
		 {
		 	 	if(i == 0)
		 	 	 {
		 	 	 	l = 1;
		 	 	 }
		 	 	else
		 	 	 {
		 	 	 	l = 0;
		 	 	 }		
		 	 	printf("\n %d  %d \n",i,l);
		 }
	}	 	 	 	 	 	 	 		  	 	 	
	
void main()
	{
	
		printf("\n GATE WORLD \n");
		
		printf("\n Press 1 for OR gate :\n Press 2 for AND gate :\n Press 3 for NOT gate \n");
		
		printf("\n Enter choice :");
		scanf("%d",&m);
		
		switch(m)
		{
			case 1:
				OR();
				break;
			case 2:
				AND();
				break;
			case 3:
				NOT();
				break;	
			default:
				printf("Enter a valid choice ... :)");
		}
	}					  	
