#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a,b,c;
	for(a=9;a>=0;a--)
	{
	for(b=0;b<=a;b++)
		 {
		  cout<<"*";
		 }
		 cout<<"\n";
	for(c=10;c>=b;c--)
		 {
		 cout<<" ";
		 }
	}
getch();
}
