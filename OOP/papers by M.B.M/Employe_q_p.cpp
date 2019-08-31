//insertion (<<) & extraction (>>) overloading

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Employee;
void saveData(Employee&);      // iostream???? cin in string """"getline(cin,string);""""
void readData(Employee&);       // cout simple
class Employee	{
	int id;
		string name;
		float salary;
		public:
		friend void operator<<(ostream&,Employee&);
		friend void operator>>(istream&,Employee&);             // friend fns is mst 4 << & >> operator
};
void operator <<(ostream& s,Employee& e){
			cout<<"\n\nid is:";                         // concatination is possible only if return type is not void bt ostram or istream   ( <<objct<<objct or >>objct>>objct
			s<<e.id;
			cout<<"\n\nName is:";
			s<<e.name;
			cout<<"\n\nSalary is:";
			s<<e.salary;
	
}
void operator >>(istream& s,Employee& e){
			cout<<"\nEnter id:";
			s>>e.id;
			cout<<"\nEnter Name:";
			s>>e.name;
			cout<<"\nEnter Salary:";
			s>>e.salary;	
}
 main(){
	int a;
	cout<<"Enter no. of employee which you want to save:";
	cin>>a;
	Employee e1[100];
	for(int i=0;i<a;i++)
	{
		cout<<"\nEnter record of Employee"<<i+1<<endl;
		saveData(e1[i]);
	}
	int b;
	cout<<"\nEnter no. of employee which you want to read:";
	cin>>b;
	if(b>a){
		cout<<"There exist only "<<a<<" records in file \nso you can read lessthan or equal to "<<a<< " records only";
		exit(1);
	}
	for(int i=0;i<b;i++){	
		cout<<"\nRecord of Employee"<<i+1<<endl;
		readData(e1[i]);
	}
}
void readData(Employee	 &p){
		fstream f;         //fstream=> ostream & istream
		f.seekg(0);       // seekg()>> ptr set frm start,
		f.open("group.dat",ios::in|ios::binary);        //  app only for write, //in>> read
		f.read((char*)&p,sizeof(p));
		cout<<p;
}
void saveData(Employee& p){
		cin>>p;
		fstream f;
		f.open("group.dat",ios::app|ios::out|ios::binary);     //out show > we write  // app > mch objcts, one end 2nd start  // binary > in & out alwys
		f.write((char*)&p,sizeof(p));	
}