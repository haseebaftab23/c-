#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
float x,y;
cout<<"Enter The Nominator =";
cin>>x;
cout<<"Enter The Denominator =";
cin>>y;

float z=fmod(x,y);
cout<<"The Mod Of Nominator '"<<x<<"' Denominator '"<<y<<"' Is = "<<z;
getch();
}