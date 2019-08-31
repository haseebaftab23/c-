#include<iostream>
#include<string>
using namespace std;
class person{
	protected:
		string name;
	public:
		void getName(){
			cout<<"Enter Name:";
			cin>>name;
		}
		void putName(){
			cout<<"\nName is:";
			cout<<name;
		}
		virtual void getData()=0;	
		virtual bool isOutstanding()=0;    //equal 2=0 for pure virtual
};
class student:public person{
	private:
		float gpa;
	public:
		void getData()	{
			person::getName();
			cout<<"\nEnter student's GPA";
			cin>>gpa;			
		}
		bool isOutstanding(){
			return (gpa>3.5)?true:false;
		}
};
class professor:public person{
	private:
		int numPubs;
	public:
		void getData(){
			person::getName();
			cout<<"\nEnter number of professor's publications";
			cin>>numPubs;
		}
		bool isOutstanding(){
			return (numPubs>100)?true:false;
		}
};
int main(){
	person *p[100];     //pure>> objct nhi bna skty jst ptointr bna skty hyn
	int n=0;
	char choice;
	do{
		cout<<"Enter student or professor(s/p)";
		cin>>choice;
		if(choice=='s')
			p[n]=new student;
		else
			p[n]=new professor;
		p[n++]->getData(); 
		cout<<"\nEnter another (y/n)";
		cin>>choice;
	}while(choice=='y');
	for(int j=0;j<n;j++){
		p[j]->putName();
		if(p[j]->isOutstanding())
			cout<<"\nThe person is outstanding\n";
	}
	
	return 0;
}