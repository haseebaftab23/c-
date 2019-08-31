#include<iostream.h>
#include<conio.h>
//it is multi level inheritance.base<--derive1<--derive2.
class base{//base class
	int a,b;
	protected:
	int m,n;
	public:
		void input(){//input in m,n
		cout<<"\nEnter value of m=";
		cin>>m;
		cout<<"Enter value of n=";
		cin>>n;
		}
};
class derive1:public base{//derive class inherits base class
	public:
		void print(){//print function
		input();//first of all when we call print function through derive2'object,then in this defination it calls input()
		//function of base class first and then print its protected members,protected members can be access in derive class
			cout<<"\nvalue of m="<<m;
			cout<<"\nvalue of n="<<n;
		}
};
class derive2:public derive1{//c class inherits derive class
	public:
	void in(){
	input();//valid because base class has input() function which is inherited in derive1 class and through derive1 it is
	//inherited in derive2 class also.
	}
};

main(){
	derive2 obj;
	obj.print();//print function of derive1 class is called,then it call input function of base class
	cout<<"\nAgain input\n";
   obj.in();//it calls 'in' fuction of derive2 and in defination input() of base class is called. 
}