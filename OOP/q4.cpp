#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
	 class person
	 {
	 char n[20];
	 int age;
	 long  nic;
	 public:
	 void writedata()
		 {
		 cout<<"Enter Your name : ";
		 cin>>n;
		 cout<<"Enter your age : ";
		 cin>>age;
		 cout<<"Eneter your NIC # : ";
		 cin>>nic;
			ofstream file("d:\\file\\pdata.dat");
			if(!file)
			  {
			  cout<<"Error";
			  exit(1);
			  }
			file<<n<<"\n"<<age<<"\n"<<nic;
	  file.close();
		 }
	 void readdata()
	 {
	  ifstream file;
	  file.open("d:\\file\\pdata.dat");
		if(!file)
			  {
			  cout<<"Error";
			  exit(1);
			  }
			  file>>n>>age>>nic;
			  cout<<"your name is : "<<n<<"\nYour age is : "<<age<<"\nYour NIC # is : "<<nic;
			  file.close();
		}
		};
		 main()
	 {
	 person obj;
	 obj.writedata();
	 obj.readdata();
	 }
