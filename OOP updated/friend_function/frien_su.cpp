#include<iostream.h>
#include<conio.h>
//this program demonstrates frend classes..
class B;//declare class bcoz class A use it 
class A{
	int a;
		friend int sum(A,B);//this friend function takes 2 class objects and through these objects we are adding their data member's values
	public:
		A(int a1){
			a=a1;
		}
};

class B{
	int b;
	public:
		friend int sum(A,B);//same function friend of both classes
		B(int b1){
			b=b1;
		}
};
main(){
	A aa(1);
	B bb(2);
	cout<<"Sum="<<sum(aa,bb);//friend function calling having objects of both classes
}
int sum(A x,B y){
	return (x.a+y.b);
}