#include<iostream.h>
#include<conio.h>
class trignometry
{    
     public:
	 virtual void area()=0;
};
class circle:public trignometry
{
	float radius;
	public:
	circle(float r)
	{
	    radius=r;
	}
	void area()
	{
	    cout<<"\nArea Of Circle Is: "<<3.1415*radius*radius;
	}
};
class rectangle:public trignometry
{
	float L,W;
	public:
	rectangle(float l, float w)
	{
    	L=l;
    	W=w;
	}
	void area()
	{
    	cout<<"\nArea Of Rectangle Is: "<<L*W;
   	}
};
main()
{
       cout<<"Enter The Radius Of Circle : ";
       float R;
       cin>>R;
       cout<<"Enter The Length Of Rectangle : ";
       float L;
	   cin>>L;
       cout<<"Enter The Width Of Rectangle : ";
       float W;
	   cin>>W;
       trignometry *t[2];
       circle c(R);
       rectangle r(L,W);
       t[0]=&c;
       t[1]=&r;
       for(int i=0; i<2; i++)
       t[i]->area();
getch();
}