#include<iostream.h>
#include<conio.h>
//this program has 2 pure virtual function,,,remember each class of this scnerio must inherit from base class 
//base1 class is abstract class having pure virtual function but derive1,derive2 are concrete classes..
class base1{
	public:
	virtual void print()=0;//such a virtual function which have prototype but not define in base class
 	virtual void print1()=0;
};
class derive1:public base1{
	public:
		void print(){//overriding print function otherwise this class will also become abstract class.a class having 
		//1 or more than virtual function is called abstract class and object of abstract class cannot form,
		//but pointer can be formed, 
			cout<<"print function of derive1\n";
		}
				void print1(){
			cout<<"print1 function of derive1\n";
		}
};
class derive2:public base1{
	public:
		void print(){
			cout<<"print function of derive2";
		}
				void print1(){
			cout<<"print1 function of derive1\n";
		}
};

void main(){
	base1 *pb[2];//pointer array of base class which will contain addresses of derive classes..
	derive1 x;
	derive2 y;
	pb[0]=&x;
	pb[1]=&y;
	for(int i=0;i<2;i++)
		pb[i]->print1();

}