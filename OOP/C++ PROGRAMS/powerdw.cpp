#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int b,p;
int ans=1;
cout<<"Enter the power = ";
cin>>p;
cout<<"Enter the base = ";
cin>>b;
clrscr();
int i=1;
do
	{
	ans=ans*b;
	i++;
	}while(i<=p);
  {
  cout<<p<<" times multiple of "<<b<<" = "<<ans;
  }
getch();
}

