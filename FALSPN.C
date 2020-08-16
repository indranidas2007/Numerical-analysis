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
	float x0,x1,x2,e,y0,y1,y2;
	clrscr();
	printf("ENTET THE VALUES OF x0,x1: ");
	scanf("%f%f",&x0,&x1);
	printf("\nENTER ERROR ALLOWED AND MAX ITARATION: ");
	scanf("%f%d",&e,&maxitr);
	y0=f(x0);
	y1=f(x1);
	if(y0*y1>0)
	   printf("Starting values unsuitable: %f,%f,%f,%f",x0,x1,y0,y1);
	else
	   {
		for(i=1;i<=maxitr;i++)
		  {
		     x2=(x0*y1-x1*y0)/(y1-y0);
		     y2=f(x2);
		     if(fabs(y2)<=e)
			{
			   printf("Convergent solution in %d th itaration",i);
			   printf("\n x=%f,f(x)=%f",x2,y2);
			   break;
			}
		     if(y0*y2>0)
			{
			   y0=y2;
			   x0=x2;
			}
		     else
			{
			   y1=y2;
			   x1=x2;
			}
		  }
		     if(i>maxitr)
		     printf("solution does not convergents in %d th itaration",maxitr);
	      }
	     getch();
    }
