#include<iostream.h>
#include<conio.h>
//cascading of functions with arguments... 
class A{
	int a;
	public:
	void set(int x){
		a=x;
	}
	void out(){
		cout<<"\nvalue for a="<<a;
	}
};
class B:public A{
	int b;
	public:
	void set(int m,int n){
		A::set(m);
		b=n;
	}
	void out(){
		A::out();
		cout<<"\nvalue for b="<<b;
	}
};
class C:public B{
	int c;
	public:
	void set(int m,int n,int o){//C's set() receive 3 values ,which send m,n to B's set()  ,then B's set() function recive 1 value..
		B::set(m,n);
		c=o;
	}
void out(){
	B::out();
	cout<<"\nvalue of c="<<c;
	}
};
main(){
	C obj;
	obj.set(1,2,3);//cascading of function calling with argument...
	obj.out();
}