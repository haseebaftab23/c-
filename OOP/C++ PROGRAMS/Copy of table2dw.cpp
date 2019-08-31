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
 do
  {
  cout<<a<<"x"<<i<<"="<<a*i<<endl;
  i++;
  }while(i<=c);
getch();
}