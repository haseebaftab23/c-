#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class rec
{
	private:
	int l;
	int w;
	
	public:
	void getdata()
	{
		cout<<"Enter The Length Of Rectangle =";
	    cin>>l;
	    cout<<"Enter The Width Of Rectangle =";
	    cin>>w;
	}
	void area()
	{
	    int area=l*w;
		cout<<"The Area Of Rectangle ="<<area;
		int per=2*(l+w);
		cout<<"\n";
		cout<<"The Perameter Of Rectangle ="<<per;
		cout<<"\n";
	}
	void draw()
	{
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
	        cout<<"\n";
	}
};
main()
{
	int opp;
	rec r1;
	x:
	cout<<"1 for Draw Rectangle";
	cout<<"\n";
	cout<<"2 for Calculate and Display Area & Perineter";
	cout<<"\n";
	cout<<"3 for Read Length & Width";
	cout<<"\n";
	cout<<"4 for Exit";
	cout<<"\n";
	cout<<"Enter Oppition";
	cout<<"\n";
	cin>>opp;
	switch(opp)
	{
		case 1:
		{
			r1.draw();
			getch();
			goto x;
		}
		case 2:
		{
			r1.area();
			getch();
			goto x;
		}
		case 3:
		{
			r1.getdata();
			getch();
			goto x;
		}
		case 4:
		{
			exit;
		}
	}
getche();	
}