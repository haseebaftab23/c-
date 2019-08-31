#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int i,x=0,y=1,s;
cout<<x<<endl<<y<<endl;
for(i=3;i<=10;i++)
{
s=x+y;
cout<<s<<endl;
x=y;
y=s;
}
getch();
}
