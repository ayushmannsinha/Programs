// implementing stack using arrays

# include<stdio.h>
# include<stdlib.h>
# define max 5

int stack[max],value,n,top = -1;
	
	// function to enter element in stack 
void push()
	{
		if(top == max-1)
		 {
		 	printf("Stack overflow \n");
		 }
		else
		 {    
		 	top = top+1;
		 	
		 	printf("Enter Value :");
		 	scanf("%d",&value);
		 	
		 	stack[top] = value; 	 
		 }
	}	 
	
	// function to delete last(top) element from stack  
void pop()
	{	
		if(top == -1 )
		 {
		 	printf("Stack underflow \n");
		 }
		else
		 {
		 	value = stack[top];
		 	top = top-1;
		 	
		 	printf("The deleted element is %d \n",value);
		 }
	}
	
	// function to print last(top) element without deletion
void peep()
	{     		
		if(top == -1)
		 {	
		 	printf("Stack empty \n");
		 }
		else
		 {	
		 	value = stack[top];
		 	printf("The top value is %d \n",value);
		 }
	}
	
void main()	
	{     
		int ch,stack[max];
		
		// display of choices
	      printf(" \n 1. Push \n 2. Pop \n 3. Peep \n ");
	   
	   while(1)
	     {      // selection of choices
			printf("Enter your choice : \n");
			scanf("%d",&ch);
 	
			switch(ch)
		   	{     // cases to be performed
		   		case 1:
		   			push();
		   			break;
		   		case 2:
		   			pop();
		   			break;
		   		case 3:
		   			peep();
		   			break;
		   		case 4:
		   		      exit(n);
		   		      break;
		   		default:
					printf("Enter a valid choice .... LOL \n");
			} 			 	
	     }
	}	     
