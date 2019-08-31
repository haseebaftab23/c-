#include<iostream.h>
#include<conio.h>
int power(int a,int b)
{
int g=1;
for(int i=1; i<=b; i++)
g=g*a;
return g;
}

main()
{
clrscr();
int n,p;
cout<<"no =.";
cin>>n;
cout<<"power";
cin>>p;
cout<<power(n,p);


getch();
}