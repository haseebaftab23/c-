	#include<iostream.h>
	#include<conio.h>
	//B class is friend of A class
	class A{
		int m;
		protected:
		int n;
		public:
			void assign(int m1,int n1){
				m=m1;
				n=n1;
			}
			friend class B;//B class is friend of A class
	};
	class B{//B class can access A class data member 
		public:
			float sum(A obj){//sum function is using A class object
				return (obj.m+obj.n);
			}
	};
	void main(){
		A aa;
		B bb;
		aa.assign(2,3);
      cout<<"Sum of two values:"<<bb.sum(aa);

	}