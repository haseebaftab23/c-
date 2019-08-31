#include<iostream.h>
#include<conio.h>
//This program has 1 pure virtual function name print()
class base1{
protected:
int a;
	public:
		virtual void print()=0;
		void print1(){
			cout<<"print1()";
		}
};
class Derive1:public base1{
	public:
		void print(){

			cout<<"pure virtual function of derive 1 class "<<endl;
		}
};
class Derive2:public base1{
	public:
		void print(){
			cout<<"pure virtual function of derive 2 class "<<endl;
		}
};
class Derive3:public base1{
	public:
		void print(){
			cout<<"pure virtual function of derive 3 class "<<endl;
		}
};
 main(){
	base1 *pt[2];
	Derive1 d1;
	Derive2 d2;
	pt[0]=&d1;
	pt[1]=&d2;
	for(int i=0;i<=1;i++)
		pt[i]->print();
}