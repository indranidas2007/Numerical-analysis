/*SIMPHON'S 1/3 RULE*/



#include<stdio.h>
void main()
{
	float f(float x);
	float a,b,h,sum=0.0,result;
	int i,n;
	clrscr();
	printf("Enter the initial values of x:");
	scanf("%f",&a);
	printf("Enter the final values of x :");
	scanf("%f",&b);
	printf("\nEnter the number of segment (EVEN NUMBER):");
	scanf("%d",&n);
	if(n%2!=0)
		printf("\nNumber of segments not even number\n");
	else
	{
		h=(b-a)/n;
		sum=f(a)+f(b);
		for(i=1;i<n;i++)
		{
			if(i%2==0)
				sum=sum+2.0*f(a+i*h);
			else
				sum=sum+4.0*f(a+i*h);
		}
		result=(h/3.0)*sum;
		printf("\n\nValue of integral is %f \n\n",result);
	}
		getch();
}
	float f(float x)
	{
	return(1.0/(1.0+x*x));
	}
	



































