#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a,b,c;
cout<<"Enter any no.  = ";
cin>>a;
cout<<"Enter the start no. = ";
cin>>b;
cout<<"Enter last no. = ";
cin>>c;
clrscr();
int i=b;
while(i<=c)
  {
  cout<<a<<"x"<<i<<"="<<a*i<<endl;
  i++;
  }
getch();
}