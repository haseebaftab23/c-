#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a,b,c;
	for(a=5;a>=1;a--)
	{
	for(b=1;b<=a;b++)
		 {
		  cout<<" ";
		 }
	for(c=6;c>=b;c--)
		 {
		 cout<<" *";
		 }
		cout<<endl;
	}
	for(a=1;a<=5;a++)
	{
	for(b=1;b<=a;b++)
		 {
		  cout<<" ";
		 }
	for(c=6;c>=b;c--)
		 {
		 cout<<" *";
		 }
		cout<<endl;
	}
getch();
}
