// calculate roots of a equation

#include <stdio.h>
#include<math.h>

float root1,root2,disc,a,b,c;
void main()
{

	//calculate discriminant
	
	printf("Enter coefficients of x^2, x and constant resp. \n");
	scanf("%f %f %f",&a,&b,&c);
	
	disc = sqrt(b*b-4*a*c);
	
	//Calculating roots
	
	root1 = (-b + disc)/2*a;
	root2 = (-b - disc)/2*a;
	
	//output
    
    if(disc<0)
      {
       printf("Roots are complex");
       }
    else   
	    {
	     printf("The roots of Equation are %f and %f \n",root1,root2);
	
         }	

}         
