#include<iostream.h>
#include<conio.h>
//program that have overloaded  pre increment operator 
class Counter{
	unsigned int count;
	public:
	//2 constructor ,1st is zero argument constructor and 2nd constructor is 
	//1 argument constructor
		Counter():count(0){
		}
     	Counter(int c):count(c){
		}

		unsigned int get_count(){//return count value of object 
			return count;
		}
		Counter operator++(){
			++count;
			return Counter(count);//here an object is return having no name ,
			//this object is called nameless object.and this nameless object's count value is 
			//initialized wih 1 argument constructor.
		}
};
int main(){
	Counter c1,c2;//c1=0,c2=0
	cout<<"c1:"<<c1.get_count();//c1=0
	cout<<"\nc2:"<<c2.get_count();//c2=0
	c2=++c1;//1st incremect c1 and it becomes c1=1 and then it assign to c2 and 
	//c2=1 becomes 
	cout<<"\nc1:"<<c1.get_count();
	cout<<"\nc2:"<<c2.get_count();
   return 0;
}