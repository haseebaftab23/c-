#include<iostream.h>
#include<conio.h>
//this program shows overriding of function having no virtual function..
class B{
	public:
		 void ppp(){
			cout<<"ppp() of base class\n";
		}
		void v(){
			cout<<"base\n";
		}
};
class d1:public B{
	public:
		void ppp(){
			cout<<"ppp() of derive class\n";
		}
				void p11(){
			cout<<"m1e";
		}
};
class d2:public B{
	public:
		void ppp(){
			cout<<"ppp() of 2nd derive";
		}
		void p(){
			cout<<"\nme";
		}
};
main(){
B *p;
d2 obj;
p=&obj;
p->ppp();//ppp() of base class will be called ,even though we assign address of d2 class's object to pointer of base class
//so note this thing,what function should call???,this depends on  type of pointer rather than which object's address contain pointer
}