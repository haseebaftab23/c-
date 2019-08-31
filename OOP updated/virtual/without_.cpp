#include<iostream.h>
#include<conio.h>
//simple program displaying overriding a function of name ppp()
class B{
	public:
		void ppp(){
			cout<<"ppp() of base class\n";
		}
};
class d1:public B{
	public:
		void ppp(){
			cout<<"ppp() of derive class";
		}
};
class d2:public B{
	public:
		void ppp(){
			cout<<"ppp() of 2nd derive";
		}
};
main(){
	B *p;//without virtual function every time pointer type class function will be called..
	d1 x;
	d2 y;
	p=&x;
	p->ppp();
	p=&y;
	p->ppp();
}