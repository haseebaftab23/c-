		#include<iostream.h>
		const int len=80;
		class Student{
			char school[len];
			char degree[len];
			public:
				void getEdu(){
					cout<<"Enter name of school or university ";
					cin>>school;
					cout<<"Enter Degree";
					cin>>degree;
				}
				void putEdu(){
					cout<<"\nUniversity name="<<school;
					cout<<"\nDegree name="<<degree;
				}
		};
		class Employee{
			char name[len];
			int Enumber;
			pulic:
				void getData(){
					cout<<"\nEnter last name"<<name;
					cout<<"\nEnter number"<<Enumber;
				}
				void putData(){
					cout<<"\nLast Name="<<name;
					cout<<"\nEmployee Number="<<Enumber;
				}
		};
		class manager:private employee,private student{           // char???#stdlib =>>>> cin>>gets(string)---- it includes space b/w string
			char title[len];                                      //              out>>puts(string)
			double dues;
			public:
				void getData(){
					Student::getEdu();
					cout<<"\nEnter Title";
					cin>>title;
					cout<<"\nEnter Dues ";
					cin>>dues;
					Employee::getData();
				}
				void putData(){
					Student::putEdu();
					cout<<"\nManager Title";
					cout<<title;
					cout<<"\nDues are";
					cout<<dues;
					Employee::putData();
				}
		};
		void main(){
			manager m;
			m.getData();
			cout<<"-------------Entered Data----------------";
         m.putData();
		}