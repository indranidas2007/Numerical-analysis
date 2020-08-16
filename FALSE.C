/*Regular falsi Method or Method of false position*/

#include<stdio.h>
#include<math.h>
#define S 10
void main()
{
	double f(double [],double,int);
	double a[S],x0,x1,x2,f0,f1,f2,e;
	int i,n,maxiter;
	clrscr();
	printf("Enter the degree of equation:");
	scanf("%d",&n);
	printf("\nEnter the coefficents:");
	printf("\n Enter the constant");
	scanf("%f",&a[0]);
	for(i=1;i<=n;i++)
		{
		   printf("\nEnter cofficient of x^:%d\n",i);
		   scanf("%f",&a[i]);
		}
		printf("\nEnter first search interval:\n");
		scanf("%f",&x0);
		printf("\nEnter second search interval:\n");
		scanf("%f",&x1);
		printf("\nEnter the tolarance value:\n");
		scanf("%f",&e);
	printf("\nEnter the no. of itarations:");
	scanf("%d",&maxiter);
	f0=f(a,x0,n);
	f1=f(a,x1,n);
	if(f0*f1>0.0)
	{
		printf("\nStarting values are Unsuitable\n");
		exit();
	}
	for(i=1;i<=maxiter;i++)
	{
		x2=(x0*f1-x1*f0)/(f1-f0);
		f2=f(a,x2,n);
		if(fabs(f2)<e)
		{
		printf("\nConvergent solution\n");
		printf("\nRoot is %.41f\n",x2);
		exit();
		}
		if(f2*f0<0)
		{
			x1=x2;
			f1=f2;
		}
		else
		{
			x0=x2;
			f0=f2;
		}	
	}
	printf("\nDoes not converges in %d itarations\n",maxiter);
	printf("\nx2=%8.41f",x2);
}
double f(double coeff[],double x,int n)
{
	double sum=0.0;
	int i;
	for(i=0;i<=n;i++)
	sum+=coeff[i]*pow(x,i);
	return(sum);
}








