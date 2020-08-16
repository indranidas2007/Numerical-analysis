/*TRAPEZOIDAL RULE*/



#include<stdio.h>
void main()
{
	float f(float x);
	float a,b,h,sum,result;
	int i,n;
	clrscr();
	printf("Enter the initial values of x:");
	scanf("%f",&a);
	printf("Enter the final values of x :");
	scanf("%f",&b);
	printf("Enter the segment width:");
	scanf("%f",&h);
	n=(b-a)/h;
	sum=(f(a)+f(b))/2.0;
	for(i=1;i<n;i++)
	{
		sum=sum+f(a+i*h);
	}
	result=sum*h;
	printf("\n\nValue of integral using trapezoidal rule is %f \n\n",result);
	getch();
}
float f(float x)
{
	return(1.0/(1.0+6x*x));
}
	



































