#include<iostream.h>
#include<conio.h>
//cascading calling of function from derive class..
class Person{
	protected:
	int id;
	char name[5],adress[50];//char type array
	public:
	Person(){
		id=0;
		name[0]='\0';//name as null
		adress[0]='\0';//address as null
	}
	void input(){
		cout<<"Enter id:";
		cin>>id;
		cout<<"\nEnter your name:";
		cin>>name;
		cout<<"\nEnter your address:";
		cin>>adress;
	}
	void output(){
		cout<<"\nid:"<<id<<endl;
		cout<<"\nName:";
		cout<<name;
		cout<<"\nAdress";
		cout<<adress;
	}
}   ;
class Student:public Person{
	int rno,marks;
	public:
	Student(){//defult constructor 
		Person();
			rno=marks=0;
	}
	void input(){
		Person::input();//because input() function has same name so must write person::input()
		cout<<"\nEnter rollno:";
		cin>>rno;
		cout<<"\nEnter marks:";
		cin>>marks;
	}
	void output(){
		Person::output();//binary scope resolution operator calls output() function of base class
		cout<<"\nRoll no:"<<rno;
		cout<<"\nmarks:"<<marks;
	}

};
class scholarship:public Student{
char sname[50];
long amount;
  public:
  void input(){
		Student::input();//because input() function has same name so must write student::input()
		//because scholarship inherits student
		cout<<"Enter scholar ship name:";
		cin>>sname;
		cout<<"Enter amount:";
		cin>>amount;
  }
  void output(){
		Student::output();
		cout<<"\nScholar ship name:";
		puts(sname);
		cout<<"\nAmount of scholar ship:";
		cout<<amount;
  }    
  
  };
  main(){
		scholarship obj;
		obj.input();//first scholar ship input() is called which first call student input() function,then student input()
		//function called person'input() function 
		obj.output();//the same procedure with output() function
}
