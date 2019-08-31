#include<iostream.h>
#include<conio.h>
main()
{
x:
clrscr();
char a[20];
int b=0;
cout<<"Enter your full name : ";
cin>>a;
for(int i=0; i<=19; i++)
{
if(a[i]=='\0')
	{
	goto s;
	}
else
b++;
}
clrscr();
s:
b=b-1;
for(int j=b;j>=0;j--)
cout<<a[j];
getch();
goto x;
}
