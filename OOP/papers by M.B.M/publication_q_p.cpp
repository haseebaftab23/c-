#include<iostream.h>
using namespace std;
class Publication{
	string name;
	int id;
	public:
		void getData(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"\nEnter id:";
			cin>>id;
		}
		void putData(){
			cout<<"\nName is:";
			cout<<name;
			cout<<"\nid is:";
			cout<<id;
		}
};
class Book:private Publication{
		int pages;
		public:
		void getData(){
			Publication::getData();
			cout<<"\nEnter pages:";
			cin>>pages;
		}
		void putData(){
			Publication::putData();
			cout<<"\nPages:";
			cout<<pages;
		}
};
class Tape:private Publication{
	float ptime;
	public:
	void getData(){
		Publication::getData();
		cout<<"\nEnter ptime";
		cin>>ptime;
	}
	void putData(){
		Publication::putData();
		cout<<ptime;
	}
};
int main(){
	cout<<"\n----Book----\n";
	Book b1;
	b1.getData();
	b1.putData();
	cout<<"\n---Tap---\n";
	Tape t1;
	t1.getData();
	t1.putData();
	return 0;
}