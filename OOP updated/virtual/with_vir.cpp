#include<iostream.h>
#include<conio.h>
//first read virtual program
//program has overriding ppp() function using virtual function...
class B{
	public:
		virtual void ppp(){//ppp() with virtual
			cout<<"\nppp() of base class\n";
		}
};
class d1:public B{
	public:
		void ppp(){
			cout<<"\nppp() of derive class\n";
		}
		void p11(){
			cout<<"\np11() of d1";
		}
};
class d2:public B{
	public:
		void ppp(){
			cout<<"\nppp() of 2nd derive";
		}
		void p(){
			cout<<"\np() in d2";
		}
};
main(){
	B *p,a;
	d1 x;
	d2 y;
	d1 *p1;
 	p1=&x;
    p1->p11();//p1() of d1 will be printed,bcoz we have address of x in p1 pointer
	p=&a;
	p->ppp();
	p=&x;
	p->ppp();
	p=&y;
	p->ppp();
   // p1=&y;base class pointer can contain any type of addresses but here d2 type object is passed to d1 type pointer
   // p1->ppp();
}