#include<iostream.h>
#include<conio.h>
//program having both pre increment and post increment overloaded operator 
class Counter{
	unsigned int count;
	public:
		Counter():count(0){//it is intializer list
		}
		unsigned int get_count(){
			return count;
		}
		void operator++(int){//overloaded post increment,note here int just 
		//indicate post increment ,so this is not a int type variable.
			count++;
		}
			void operator++(){//overloaded pre increment operator
			++count;
		}
};
int main(){
	Counter c1,c2,c3;//c1=0,c2=0,c3=0 by constructor
	cout<<"c1:"<<c1.get_count();//c1=0
	cout<<"\nc2:"<<c2.get_count();//c2=0
	c1++;//c1=1
	cout<<"\nc1:"<<c1.get_count();//c1=1
	++c2;//c2=1
	c2++;//c2=2
	cout<<"\nc1:"<<c1.get_count();//c1=1
	cout<<"\nc2:"<<c2.get_count();//c2=2
	cout<<"\nc3:"<<c3.get_count();//c3=0
   return 0;
}