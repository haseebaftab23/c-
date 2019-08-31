#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int a;
cout<<"\n          <<  ==================================   >>               \n\n";
cout<<"              1. Forward"<<" \n"<<"              2. Reverse "<<"\n";
cout<<"              Select any option:  ";
cin>>a;
  switch(a)
  {
	case 1:
	 for(int i=1; i<=100; i++)
	 cout<<i<<endl;
	break;
	case 2:
	for(int j=100; j>=1; j--)
	cout<<j<<endl;
	break;
	default:
	cout<<" Invalid move";
	}
getch();
}
