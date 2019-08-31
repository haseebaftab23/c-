#include<iostream.h>
#include<conio.h>
//input() and print() function
class A{
	int a;
	public:
		void input(){//input in a variable
			cout<<"\nEnter value for a=";
			cin>>a;                                                                                        
		}
		void print(){
			cout<<"value of a="<<a;//printing a variable
		}
};
class B:protected A{
 	int b;
	public:
	void input(){
		A::input();//2 input functions,A::input() of base class..
		cout<<"\nEnter value of b=";
		cin>>b;
	}
	void print(){
		A::print();//print() of 'A' function
		cout<<"value of b="<<b;
	}
};
class C:public B{
	int c;
	public:
	void input(){
		B::input();//input function of B class
		cout<<"\nEnter value of c=";
		cin>>c;
	}
	void print1(){
		A::print();
	}
	void print(){
		B::print();
		cout<<"value of c="<<c;
	}
};
 main(){
	C obj;
	obj.input();//input 0f 'C' class ,which calls in first input of 'B' class and 
	//then from 'B' class input function of 'A' class is called
	obj.print();//print() of 'C' ,print() of 'B',print() of 'A'
    obj.print1();
}