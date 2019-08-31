#include<iostream.h>
#include<conio.h>
main()
{
s:
clrscr();
int b,p;
int ans=1;
cout<<"\n\n\n\t\t\t\tEnter the power = ";
cin>>p;
cout<<"\n\t\t\t\tEnter the base = ";
cin>>b;
clrscr();
for(int i=1; i<=p; i++)
ans=ans*b;
cout<<"\n\n\n\n\n\n\t\t\t "<<p<<" times multiple of "<<b<<" = "<<ans;
getch();
goto s;
}

