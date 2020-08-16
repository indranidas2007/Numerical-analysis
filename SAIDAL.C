/*GAUASS SEIDAEL METHOD*/


#include<stdio.h>
#include<math.h>
#define S 3
#define T 4
void main()
{
	int maxit,iter,i,j,n;
	float a[S][T],x[S],sum,temp,relerror,e,big;
	clrscr();
	printf("Enter the number of unknowns <=%d\n",S);
	scanf("%d",&n);
	printf("\nEnter the coefficients\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
			scanf("%f",&a[i][j]);
	}
	printf("\nEnter the maximum error allowed\n");
	scanf("%f",&e);
	printf("\nEnter the maximum number of itarations\n");
	scanf("%d",&maxit);
	for(i=0;i<n;i++)
		x[i]=0.0;
	for(iter=1;iter<=maxit;iter++)
	{
		big=0.0;
		for(i=0;i<n;i++)
		{
			sum=0.0;
			for(j=0;j<n;j++)
			{
				if(j!=i);
				sum+=a[i][j]*x[j];
			}
			temp=(a[i][n]-sum)/a[i][i];
			relerror=fabs((x[i]-temp)/temp);
			if(relerror>big)
				big=relerror;
				x[i]=temp;
		}
		if(big<=e)
		{
			printf("\nConverges to a solution\n\n");
			for(i=0;i<n;i++)
			printf("x[%d]=%8.3f\n",i+1,x[i]);
			exit();
		}
	}
	printf("\nDoes not converge in %d itarations\n",maxit);
	for(i=0;i<n;i++)
	printf("x[%d]=%8.3f\n",i+1,x[i]);
	getch();
}
				
			