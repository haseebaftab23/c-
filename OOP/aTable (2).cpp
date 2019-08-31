#include<iostream.h>
#include<conio.h>
main()
{
	int t,s,e;
    cout<<"Enter The Table No. =";
	cin>>t;
	cout<<"Enter The Starting No. =";
	cin>>s;
	cout<<"Enter The Ending No. =";
	cin>>e;
	for(int i=s; i<=e; i++)
	cout<<t<<"*"<<i<<"="<<t*i<<"\n";	
getch();
}