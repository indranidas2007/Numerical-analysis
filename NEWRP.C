/*Newton Rapson Method*/

#include<stdio.h>
#include<math.h>
#define S 10
#define ITARATION 20
void main()
{
	float f(float [],float,int);
	float diff(float coeff[],float,int);
	float a[S],x0,xn,fx,fdx,e;
	int i,n;
	clrscr();
	printf("Enter the degree of eqution:");
	scanf("%d",&n);
	printf("\nEnter the coffecient of the eqution:");
	printf("Enter the constant:");
	scanf("%f",&a[0]);
	for(i=1;i<=n;i++)
	{
		printf("Enter the coefficient of X^:%d\n",i);
		scanf("%f",&a[i]);
	}
	printf("\nEnter the initial value of x:");
	scanf("%f",&x0);
	printf("\nEnter the tolarance value:");
	scanf("%f",&e);
	for(i=1;i<=ITARATION;i++)
	{
		fx=f(a,x0,n);
		fdx=diff(a,x0,n);
		xn=x0-fx/fdx;
		if((fabs(xn-x0)/xn)<e)
		{
			printf("Solution converges to the Root\n");
			printf("\nNumber of Itarations=%d\n",i);
			printf("\nRoot x=%8.4f",xn);
			return;
		}
		else
		{
			x0=xn;
		}
	}
	printf("\n\nSolution does not converges \n");
}
float f(float coeff[],float x,int n)
{
	
	float sum=0.0;
	int i;
	for(i=0;i<=n;i++)
	sum+=coeff[i]*pow(x,i);
	return(sum);
}
float diff(float coeff[],float x,int n)
{
	
	float sum=0.0;
	int i;
	for(i=0;i<=n;i++)
	sum+=coeff[i]*pow(x,i-1);
	return(sum);
}