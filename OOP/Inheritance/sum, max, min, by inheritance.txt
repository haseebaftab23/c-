#include<iostream.h>
#include<conio.h>
class sum
{
	int a,b,su;
	public:
	sum(int u, int v)
	{
		a=u;
		b=v;
	}
	summation()
	{
		su=a+b;
		cout<<"The Sum Of "<<a<<" & "<<b<<" ="<<su;
	}
};
class max
{
	int c,d,e,ma;
	public:
	max(int w, int x, int y)
	{
		c=w;
		d=x;
		e=y;
	}
	maximum()
	{
		if(c>d && c>e)
		ma=c;
		if(d>c && d>e)
		ma=d;
		if(e>c && e>d)
		ma=e;
		cout<<"The Maximum # From "<<c<<" ," <<d<<" & "<<e<<" Is="<<ma;
	}
};
class fact:public sum, public max
{
	int f,fac;
	public:
	fact(int a,int b,int c,int d,int e,int z):sum(a,b),max(c,d,e)
	{
		fac=0;
		f=z;
	}
	factorial()
	{
		for(int i=1; i<=f; i++)
		fac=fac*i;
		cout<<"The Factorial Of "<<f<<" = "<<fac;
	}
};
main()
{
	int a,b,c,d,e,f;
	cout<<"Enter Two Values For Summation :";
	cin>>a;
	cin>>b;
	cout<<"Enter Three Values To Find Maximum Value :";
	cin>>c>>d>>e;
	cout<<"Enter Any Interger For Factorial :";
	cin>>f;
	fact obj(a,b,c,d,e,f);
	obj.sum::summation();
	obj.max::maximum();
	obj.fact::factorial();
}