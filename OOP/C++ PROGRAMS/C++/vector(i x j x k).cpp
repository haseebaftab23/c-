#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float a,b,c,x,y,z,ans1,ans2,ans3;
cout<<"Enter the 'i' component of 1st vector = ";
cin>>a;
cout<<"Enter the 'j' component of 1st vector = ";
cin>>b;
cout<<"Enter the 'k' component of 1st vector = ";
cin>>c;
cout<<"Enter the 'i' component of 2nd vector = ";
cin>>x;
cout<<"Enter the 'j' component of 2nd vector = ";
cin>>y;
cout<<"Enter the 'k' component of 2nd vector = ";
cin>>z;
ans1=b*z-y*c;
ans2=-(z*a-c*x);
ans3=a*y-x*b;
cout<<"UxV ="<<"<"<<ans1<<","<<ans2<<","<<ans3<<">";
getch();
}
