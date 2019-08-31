#include<iostream.h>
#include<conio.h>
//protected data type display...
class B1{
	protected:
		int m,n;
		public:
		void assign(int a,int b){//assign values to m and n;
			m=a;
			n=b;
		}
};
class D1:public B1{//because protected data members can be access in derive class so we can add m and n.. 
	public:
		void sum(){
			cout<<"Sum="<<m+n;
		}
};
class d2:public D1{//from D1 class m,n can also access in d2... 
	public:
		void product(){
			 cout<<"product="<<m*n;
		}
};
 main(){
	d2 obj;
	obj.assign(3,4);
	obj.sum();
   obj.product();
}