#include<stdio.h>
main()
{
	double average(double x,double y,double z);
	double max(double x,double y,double z);
	double min(double x,double y,double z);
	double mid(double x,double y,double z);
	double a,b,c,d,e,f,g;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=average(a,b,c);
	e=max(a,b,c);
	f=min(a,b,c);
	g=mid(a,b,c);
	printf("Average is %f\nMax is %f\nMin is %f\nSmall To Big : %f<%f<%f\nBig To Small : %f>%f>%f\n",d,e,f,f,g,e,e,g,f); 
}
double average(double x,double y,double z)
{
	double t;
	t=(x+y+z)/3;
	return(t);
}
double max(double x,double y,double z)
{
	double t;
	if(x>y)
	{
		if(x>z)
		{
			t=x;
		}
		else
		{
			t=z;
		}
	}
	else
	{
		if(y>z)
		{
			t=y;
		}
		else
		{
			t=z;
		}
	}
	return(t);
}
double min(double x,double y,double z)
{
	double t;
	if(x<y)
	{
		if(x<z)
		{
			t=x;
		}
		else
		{
			t=z;
		}
	}
	else
	{
		if(y<z)
		{
			t=y;
		}
		else
		{
			t=z;
		}
	}
	return(t);
}
double mid(double x,double y,double z)
{
	double t;
	if(x<y)
	{
		if(x>z)
		{
			t=x;
		}
		else
		{
			if(y>z)
			{
				t=z;
			}
			else
			{
				t=y;
			}
		}
	}
	else
	{
		if(y>z)
		{
			t=y;
		}
		else
		{
			if(x>z)
			{
				t=z;
			}
			else
			{
				t=x;
			}
		}
	}
	return(t);
}
