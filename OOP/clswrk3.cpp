#include<iostream.h>
#include<conio.h>
	 class abc
	 {
	 int a,b;
		public:
		friend void xy(abc, int, int);
		void print()
		{
		cout<<a<<" "<<b;
		}
	  };
main()
{
	  abc obj;
	  xy(obj, 3, 6);
	  obj.print();
	  cout<<"OK";
}
void xy(abc &c, int x, int y)
{
    c.a=x;
   c.b=y;
}
