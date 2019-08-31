#include<iostream.h>
#include<conio.h>
//This program is doing both task pre increment and post increment by using object
//note that when pre increment or post increment is used with object then function
//calling is performed automatically.
class Counter{
	unsigned int count;//unsigned type is for only positive values.
	public:
		Counter():count(0){//it is initializer list and it is equal to count=0
		}
		unsigned int get_count(){//it is getter function
			return count;
		}
		Counter operator++(int){//this function will return object of type count.
			//in case of post increment first assign value of count to that object'count which u want to return.
			Counter obj;
			obj.count=count;//first assign
         	count++;//then increment count of called object.
			return obj;
		}
			Counter operator++(){
			++count;//in pre increment first step is to increment count
			 Counter obj;//counter object which will carry incremented value 
			obj.count=count;
			return obj;
		}
};
int main(){
	Counter c1,c2,c3;
	cout<<"c1:"<<c1.get_count();//c1=0
	cout<<"\nc2:"<<c2.get_count();//c2=0
	c1++;//c1=1
	cout<<"\nc1:"<<c1.get_count();
	++c2;//c2=1
	c3=c2++;//c3=1,c2=2
	cout<<"\nc1:"<<c1.get_count();//c1=1
	cout<<"\nc2:"<<c2.get_count();//c2=2
	cout<<"\nc3:"<<c3.get_count();//c3=1
   return 0;
}
