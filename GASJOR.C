#include<stdio.h>
#include<conio.h>
void main()
	{
		float a[20][21],x[20],u,sum;
		int i,j,k,n;
		printf("Enter no. of Eqution:");
		scanf("%d",&n);
		printf("\nEnter the elements of the argumented matrix:" );
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n+1;j++)
					scanf("%f",&a[i][j]);
			}
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(j!=i)
					{
						u=a[j][i]/a[i][j];
						for(k=1;k<=n+1;k++)
						a[j][k]=a[j][k]-a[i][k]*u;
					}
				}
			}
		printf("The solution is: ");
		for(i=1;i<=n;i++)
		printf("\nx[%d]=%f\n",i,a[i][n+1]/a[i][i]);
		getch();
	}
