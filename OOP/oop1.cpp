#include<iostream.h>
#include<conio.h>
class table
{
	private:
	int t,s,e;
	public:
	void getdata()
	{
		cout<<"Enter The Table No. =";
		cin>>t;
		cout<<"Enter The Starting No. =";
		cin>>s;
		cout<<"Enter The Ending No. =";
		cin>>e;
	}
	void tt(int a, int b, int c)
	{
	a=t;
	b=s;
	c=e;
	for(int i=s; i<=e; i++)
	cout<<t<<"*"<<i<<"="<<t*i<<"\n";	
	}
};
void main(void)
{
	if(s<e)
	 {
	   for(int i=s; i<=e; i++)
	   cout<<t<<"*"<<i<<"="<<t*i<<"\n";	
  	 }
    if(s>e)
	 {
	   for(int i=s; i>=e; i--)
	   cout<<t<<"*"<<i<<"="<<t*i<<"\n";
	 }
}