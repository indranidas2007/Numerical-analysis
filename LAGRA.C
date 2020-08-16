#include<stdio.h>
#define S 10
void main()
{
	void lagrange(float [],float [],int,float);
	float x[S],y[S],value;
	int i,n;
	clrscr();
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value of x[%d] and y[%d] :",i+1,i+1);
		scanf("%f%f",&x[i],&y[i]);
	}
	printf("\nEnter the value of x at which y or f(x) is to be found :");
	scanf("%f",&value);
	lagrange(x,y,n,value);
	getch();
}
void lagrange(float x[],float y[],int n,float value)
{
	float fx=0.0,sum=0.0;
	int i,j;
	for(i=0;i<n;i++)
	{
		sum=y[i];
		for(j=0;j<n;j++)
		{
			if(i!=j)
			sum=sum*(value-x[j])/(x[i]-x[j]);
		}
		fx+=sum;
	}
	printf("\n\nf(%.3f)=%.3f\n\n",value,fx);
}