#include<stdio.h>
#include<conio.h>
void main()
{
	float a[20][21],x[20],u,sum;
	int i,j,k,n;
	clrscr();
	printf("Enter no of equtions: ");
	scanf("%d",&n);
	printf("\nEnter the element of the argumented matrix: ");
	for(i=1;i<=n;i++)
	   {
		for(j=1;j<=n+1;j++)
		   scanf("%f",&a[i][j]);
	   }
	   for(k=1;k<=n-1;k++)
		   {
		      for(i=k+1;i<=n;i++)
		      {
			   u=a[i][k]/a[k][k];
			   for(j=k;j<=n+1;j++)
			      a[i][j]=a[i][j]-u*a[k][j];
		      }
		   }
	for(i=n;i>=1;i--)
	   {
		sum=0;
		for(j=i+1;j<=n;j++)
		   sum=sum+a[i][j]*x[j];
		   x[i]=(a[i][n+1]-sum)/a[i][i];
	   }
	   printf("\nThe solution is: ");
	   for(i=1;i<=n;i++)
	      printf("\nx[%d]=%f\n",i,x[i]);
	   getch();
}