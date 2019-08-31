#include<iostream.h>
#include<conio.h>
//in this program post increment operator is overloaded.
class Counter{
	unsigned int count;
	public:
		Counter():count(0){
		}
		unsigned int get_count(){//any object which will call it will return its count's value 
			return count;
		}
		void operator++(int){//here nothing is return
			count++;
		}
};
 int main(){
	Counter c1,c2;//constructor does c1=0,c2=0
	cout<<"c1:"<<c1.get_count();//c1=0
	cout<<"\nc2:"<<c2.get_count();//c2=0
	c1++;//c1=1
	c2++;//c2=1
	c2++;//c2=2
	//++c2; it is error because here only post incremented operator is overloaded
	cout<<"\nc1:"<<c1.get_count();//c1=1
	cout<<"\nc2:"<<c2.get_count();//c2=2
	return 0;
}