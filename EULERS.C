/*EULER'S METHOD */

#include<stdio.h>
void main()
{
	float f(float x,float y);
	float x,y,h,xn,dy;
	int i,n;
	clrscr();
	printf("Enter the initial values of x and y :");
	scanf("%f%f",&x,&y);
	printf("\nEnter x at which y is required :");
	scanf("%f",&xn);
	printf("\nEnter step size,h :");
	scanf("%f",&h);
	n=(int) ((xn-x)/h+0.5);
	printf("\n\nSTEP	x	y\n\n");
	for(i=1;i<=n;i++)
	{
		dy=h*f(x,y);
		x=x+h;
		y=y+dy;
		printf("%3d %10.3f %10.3f\n",i,x,y);
	}
	printf("\nValue of y at x= %f is %f\n\n",x,y);
	getch();
}
float f(float x, float y)
{
	return(x+y);
}