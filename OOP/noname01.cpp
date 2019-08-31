#include<iostream.h>
#include<conio.h>
class sum
{
	int a,b,su;
	public:
	get()
	{
		cout<<"Enter Two Values For Summation :\n";
		cin>>a;
		cin>>b;
	}
	summation()
	{
		su=a+b;
		cout<<"\nThe Sum Of "<<a<<" & "<<b<<" : "<<su;
	}
};
class max
{
	int c,d,e,ma;
	public:
	get()
	{
		cout<<"\nEnter Three Values To Find Maximum Value :\n";
		cin>>c>>d>>e;
	}
	maximum()
	{
		if(c>d && c>e)
		ma=c;
		if(d>c && d>e)
		ma=d;
		if(e>c && e>d)
		ma=e;
		cout<<"\nThe Maximum # From "<<c<<" ," <<d<<" & "<<e<<" Is : "<<ma;
	}
};
class fact:public sum, public max
{
	int f,fac;
	public:
	get()
	{
		cout<<"\nEnter Any Interger For Factorial :\n";
		cin>>f;
	}
	factorial()
	{
		fac=1;
		for(int i=1; i<=f; i++)
		fac=fac*i;
		cout<<"\nThe Factorial Of "<<f<<" : "<<fac;
	}
};
main()
{
	fact obj;
	obj.sum::get();
	obj.max::get();
	obj.fact::get();
	obj.sum::summation();
	obj.max::maximum();
	obj.fact::factorial();
}