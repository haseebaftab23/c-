#include<iostream.h>
#include<conio.h>
main()
{
float a,b,c,x,y,z,first,sec,thrd;
cout<<"Enter 'i' component of U = ";
cin>>a;
cout<<"Enter 'j' component of U = ";
cin>>b;
cout<<"Enter 'k' component of U = ";
cin>>c;
cout<<"Enter 'i' component of V = ";
cin>>x;
cout<<"Enter 'j' component of V = ";
cin>>y;
cout<<"Enter 'k' component of V = ";
cin>>z;
first=b*z-y*c;
sec=-(z*a-c*x);
thrd=a*y-x*b;
cout<<"UxV = "<<"< "<<first<<", "<<sec<<", "<<thrd<<", "<<">";
getch();
}