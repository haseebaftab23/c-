#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Person;
void print(Person&);
void input(Person&);
class Person{
		string name;
		int age;
		long nic;
		public:
		friend void operator<<(ostream&,Person&);
		friend void operator>>(istream&,Person&);
};
void operator <<(ostream& s,Person& p){
			cout<<"\nname is:";
			cout<<p.name;
			cout<<"\nAge is:";
			cout<<p.age;
			cout<<"\nNIC is:";
			cout<<p.nic;
	
}
void operator >>(istream& s,Person& p){
			cout<<"\nEnter name:";
			cin>>p.name;
			cout<<"\nEnter age:";
			cin>>p.age;
			cout<<"\nEnter NIC:";
			cin>>p.nic;	
} main(){
	Person p1[100];
	int a;
	cout<<"Enter number of persons you enter:";
	cin>>a;
	for(int i=0;i<a;i++){
		cout<<"\nEnter record of Person:"<<i+1;
		print(p1[i]);
	}
		int b;
	cout<<"\nEnter no. of employee which you want to read:";
	cin>>b;
		if(b>a){
		cout<<"There exist only "<<a<<" records in file \nso you can read lessthan or equal to "<<a<< " records only";
		exit(1);
	}
	for(int i=0;i<b;i++){
		cout<<"\nRecord of Person:"<<i+1;
		input(p1[i]);
	}
}
void input(Person &p){
		fstream f;
		f.seekg(0);
		f.open("group.dat",ios::in|ios::binary);
		f.read((char*)&p,sizeof(p));
		cout<<p;	
}
void print(Person	&p){
		cin>>p;
		fstream f;
		f.open("group.dat",ios::app|ios::out|ios::in|ios::binary);
		f.write((char*)&p,sizeof(p));	
}