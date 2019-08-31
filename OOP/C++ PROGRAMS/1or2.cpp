#include<iostream.h>
#include<conio.h>
main()
{
s:
clrscr();
int a[3];
cout<<"\n\n                <^!^!^!^!^!^!^!^!^!^!^!^!^!^!^!^>\n\n";
cout<<"                      *********************\n";
cout<<"\t\t     |\t1. Forward \t   |\n\t\t     |  2. Reverse\t   |\n";
cout<<"                      ********************* \n\n\n";
cout<<"                     ==>  Select 1 or 2 :  ";
cin>>a[0];
clrscr();
switch(a[0])
  {
	 case 1:
	 {
	 for(a[1]=1; a[1]<=100; a[1]++)
	 cout<<"  "<<a[1];
    getch();
	 goto s;
	 }
	 break;
	 case 2:
	 {
	 for(a[2]=100; a[2]>=1; a[2]--)
	 cout<<"  "<<a[2];
	 }
    getch();
	 goto s;
	 break;
	 default:
	 cout<<"\n\n\n\n\n\n\n                               \aInvalid move";
    getch();
	 goto s;
  }
  return 0;
getch();
}
