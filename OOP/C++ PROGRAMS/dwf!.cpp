#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int m=1;
int f;
cout<<"Enter any no. = ";
cin>>f;
clrscr();
int i=1;
do
 {
 m=m*i;
 i++;
 }while(i<=5);
  {
	cout<<"The factorial of "<<f<<"! = "<<m;
  }
getch();
}
