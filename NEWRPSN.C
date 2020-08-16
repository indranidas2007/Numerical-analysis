#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
	{
	   return(x*x-25);
	}
float df(float x)
	{
	   return(2*x);
	}
void main()
	{
	   int maxitr,i;
	   float x0,x1,e,d,y0,dy0;
	   clrscr();
	   printf("Enter the value of x0: ");
	   scanf("%f",&x0);
	   printf("\nENTER ERROR ALLOWED AND MAX ITARATION:" );
	   scanf("%f%d",&e,&maxitr);
	   printf("ENTER LOWER BOUND OF df :");
	   scanf("%f",&d);
	   for(i=1;i<=maxitr;i++)
	   {
		y0=f(x0);
		dy0=df(x0);
		if(dy0<=d)
		{
		   printf("Sloap too small");
		   break;
		}
		x1=x0-(y0/dy0);
		if(fabs(x1-x0)/x1<e)
		{
		   Printf("Convergent solution in %d th iteration.x=%f and f~(x)=%f",i,x1,df(x1));
		   break;
		}
	   x0=x1;
	   }
		if(i>maxitr)
		   printf("Solution does not convergent in %d itaration",maxitr);
		getch();
	   }
