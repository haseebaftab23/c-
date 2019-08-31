	#include<iostream.h>
	#include<conio.h>
	//Friend function demonstration
	//one thing remember in mind that friend function is not member function.
	class abc{
		int a,b;
		public:
		friend void xy(abc &,int,int);
			void print(){
				cout<<a<<":"<<b<<endl;
			}
	};
	int main(){
		abc obj;
		xy(obj,3,6);//friend function call having obj of abc class,
		//you can note that xy() is not member function so donot call through object
		obj.print();
		cout<<"ok";
      return 0;
	}
	void xy(abc &c,int x,int y){//xy() friend function can access a,b data member in friend function..
		c.a=x;
      	c.b=y;
	}
