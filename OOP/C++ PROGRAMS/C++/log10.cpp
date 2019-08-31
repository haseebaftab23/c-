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
float z=log10(x);
cout<<"The log10 Of "<<x<<" Is ="<<z;
getch();
clrscr();
goto a;
}