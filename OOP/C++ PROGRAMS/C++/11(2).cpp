#include<iostream.h>
#include<conio.h>
int power(int a)
{
int f=1;
for(int i=1 ; i<=a ; i++)
f=i*f;
return f;
}

main()
{
clrscr();
int f;
cout<<"no. =";
cin>>f;
cout<<power(f);


getch();
}