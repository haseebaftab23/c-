#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee{
	private:
	string firstname;
	string lastname;
	string ssn;
	public:
	Employee(string ,string ,string);
	virtual void print(){
		cout<<"\nFirst Name="<<firstname<<endl;
		cout<<"\nLastName="<<lastname<<endl;
		cout<<"\nSSN="<<ssn<<endl;
	}
	virtual double earning()=0;
};
Employee::Employee(string f,string l,string s){
	firstname=f;
	lastname=l;
	ssn=s;
}
class SalariedEmployee:public Employee{
	double weeklySalary;
	public:
	SalariedEmployee(string ,string ,string ,double=0.0);
	void print(){
		Employee::print();
		cout<<"\nWeekly Salary=";
		cout<<weeklySalary;
	}
	double earning(){
		cout<<"\nMonthly income of weekly Employee=";
		return 4*weeklySalary;
	}
};
SalariedEmployee::SalariedEmployee(string f1,string l1,string s1,double d):Employee(f1,l1,s1){
	weeklySalary=d;
}
class HourlyEmployee:public Employee{
	double wage,hours;
	public:
		HourlyEmployee(string f1,string l1,string s1,double=0.0,double=0.0);
		void print(){
		Employee::print();
		cout<<"\nWages";
		cout<<wage;
		cout<<"\nHours";
		cout<<hours;
		}
		double earning()	{
			cout<<"\nEarning of Hourly Employee=";
			return wage*hours;
		}
};
HourlyEmployee::HourlyEmployee(string f1,string l1,string s1,double w1,double h1):Employee(f1,l1,s1){
	wage=w1;
	hours=h1;
}
int main(){
	Employee *ptr[2];
	ptr[0]=new SalariedEmployee("muhammad","abdullah","66",4);
	ptr[1]=new HourlyEmployee("muhammad","ahmad","66",4,4);
	for(int i=0;i<2;i++){
		cout<<"\nDetails of person"<<i+1<<endl;
		ptr[i]->print();
		cout<<ptr[i]->earning();
	}
	return 0;
}