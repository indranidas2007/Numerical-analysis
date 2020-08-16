/*SECANT METHOD*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(x*x-25);
}
void main()
{
	int maxitr,i=0;
	float x0,x1,x2,e,y0,y1,y2,d;
	printf("Enter the values of x0 and x1 :");
	scanf("%f%f",&x0,x1);
	printf("\nEnter error allowed in the max itaration :");
	scanf("%f%d",&e,&maxitr);
	printf("\nEnter minimum value of Slope :");
	scanf("%f",&d);
	y0=f(x0);
	y1=f(x1);
	if(y0*y1>0)
		printf("Starting values unsuitable : %f%f%f%f",x0,x1,y0,y1);
	else
	{
		for(i=1;i<=maxitr;i++)
		{
			if(fabs(y1-y0)<d)
			{
				printf("Slope too small");
				break;
			}
			x2=(x0*y1-x1*y0)/(y1-y0);
			y2=f(x2);
			if(fabs(y2)<e)
			{
				printf("convergent solution in %d th itaration",i);
				printf("x=%f,f(x)=%f",x2,y2);
				break;
			}
			else
			{
				y0=y1;
				y1=y2;
				x0=x1;
				x1=x2;
			}
		}
		if(i>maxitr)
			printf("Solution does not convergent in %d th itaration",maxitr);
	}
	getch();
}