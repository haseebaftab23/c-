#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
main()
{ 
	int l,w;
	cout<<"Enter The Width Of Rectangle =";
	cin>>w;
	cout<<"Enter The Length Of Rectangle =";
	cin>>l;
	int i;
	for(i=1; i<=l; i++)
	cout<<"*";
	cout<<"\n";
	for(int j=1; j<=w; j++)
	{
		cout<<"*";
		cout<<setw(i-1);
	    cout<<"*\n";
	}
	for(int k=1; k<=i-1; k++)
	cout<<"*";
getch();	
}