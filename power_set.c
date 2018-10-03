//Write a program to print the power set of a given set

#include<stdio.h>

int set[5],i,j;

void main()
{
		
	// Entry of elements
	printf("\nEnter three elements\n");
	for(i=0;i<3;i++)
	 {	
	 	scanf("%d",&set[i]);
	 }
	 
	// Printing of power set 
	printf("\n Power set of given Set:\n");
	printf("Empty\n");
	
	// Printing of distinct elements
	for(i=0;i<3;i++)
	 {
		printf("(%d)\n",set[i]);
	 } 
	 
	// Printing of different sets within 
	for(i=0;i<3;i++)
	 {
		for(int j=i+1;j<3;j++)
		 {
			printf("(%d,%d)\n",set[i],set[j]);
		 } 
	 } 
	
	// Printing of final set
	printf("(");
	for(i=0;i<3;i++)
	 {    
		printf("%d, ",set[i]);
	 }
	printf(")"); 
}
