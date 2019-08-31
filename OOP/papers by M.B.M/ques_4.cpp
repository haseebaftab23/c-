#include<iostream.h>
#include<fstream.h>
#include<string.h>
using namespace std;
class Person{
		string name;
		int age;
		long nic;
		public:
		void setPerson(){
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"\nEnter age:";
			cin>>age;
			cout<<"\nNIC:";
			cin>>nic;
		}
		void showPerson(){
			cout<<"Name=";
			cout<<name;
			cout<<"\nAge";
			cout<<age;
			cout<<"NIC";
			cout<<nic;
		}
};
 main(){
	Person *ptr;
	ptr=new Person();
	ptr->setPerson();
	ptr->showPerson();
 
}