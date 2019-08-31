#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int rno;
	float phy,che,com;
	char name[],add[];
	public:
	void getdata()
	{
		cin>>rno>>phy>>che>>com>>name>>add;
	}
	void displayresult()
	{
		int sum=0;
		sum=phy+che+com;
		int avg;
		avg=sum/3;
		cout<<name<<sum<<'\n'<<avg;
	}
};
main()
{
  student s1,s2,s3;
  s1.getdata();
  s2.getdata();
  s1.displayresult();   
 getch(); 	
}