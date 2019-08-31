#include<iostream.h>
#include<conio.h>
#include<string>//string data type is defined in it
//net pay of an employee will be calculated..
using namespace std;
class base{
	int code;
	string name;//string is char array
	string phone;
	public:
		base(int cod,string n,string p){
		    code=cod;
			name=n;//here we do not need of strcpy() 
			phone=p;
		}
		void print1(){
			cout<<"\tCode:"<<code<<"\tName:"<<name<<"\tPhone:"<<phone;
		}
};
class derive:public base{
	int bp,hr,ma,ca,net;
	public:
		derive(int code,string n,string p,int b):base(code,n,p)//code ,n,p will pass to base class
		{
				bp=b;
		}
		void calculate(){
			hr=(bp*45)/100;
			ma=(bp*15)/100;
			ca=(bp*10)/100;
			net=bp+hr+ma+ca;
		}
		void print(){
			cout<<"Net Pay"<<net;
		}
};
main(){
	derive obj(234,"Bushra Mobin","774737497",1000);
	obj.print1();
	obj.calculate();
	obj.print();
}