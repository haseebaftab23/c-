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
while(i<=p)
        {
	ans=ans*b;
	i++;
	}
  {
  cout<<p<<" times multiple of "<<b<<" = "<<ans;
  }
getch();
}

