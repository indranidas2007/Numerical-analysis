#include<stdio.h>
#include<conio.h>
#include<math.h>
#define S 10
int main()
{
	float f(float[],float,int);
	float a[S],x0,x1,x2,y0,y1,y2,e;
	int i,n;
	
	printf("\nEnter the degree of eqution:");
	scanf("%d",&n);
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
		y0=f(a,x0,n);
		y1=f(a,x1,n);
		if(y0*y1>0.0)
		  {
		     printf("\nString values are unreliable\n");
		  }
		  i=0;
		  while((fabs(x1-x0)/x1)>e)
			{
			  x2=(x0+x1)/2;
			  y2=f(a,x2,n);
			  i++;
			  if(y0*y2>0)
			    x0=x2;
			    else x1=x2;
			}
		  printf("\n Solution converges to a root\n");
		  printf("\n Number of itaration=%d\n",i);
		  printf("\nRoot x=%8.4f",x2);
		  getch();
 }
 float f(float coeff[],float x,int n)
	{
	 float sum=0.0;
	 int i;
	 for(i=0;i<=n;i++)
	 sum=sum+coeff[i]*pow(x,i);
	 return(sum);
 }

