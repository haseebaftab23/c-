#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
float x;
a:
cout<<"Enter The Number =";
cin>>x;
float z=log(x);
cout<<"The log Of "<<x<<" Is ="<<z;
getch();
clrscr();
goto a;
}