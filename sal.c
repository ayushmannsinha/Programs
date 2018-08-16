//net salary calculate

# include<stdio.h>

int sal,ta,da,net_sal;

int main()

{
	printf("Enter the salary :");
	scanf("%d",&sal);
	
	//Apply TA
	
	ta = (.2)*(sal);
	
	//Apply DA
	
	da = (.95)*(sal);
	
	// Total salary
	
	net_sal = sal + ta + da;
	
	
	printf("TA = %d \n",ta);
	printf("DA = %d \n",da);
	printf("The net salary is %d\n",net_sal);
  
return net_sal;  
}	
	
	






