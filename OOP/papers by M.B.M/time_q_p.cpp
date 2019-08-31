#include<iostream.h>
class Time{
	int h, m, s;
	public:
	Time(int=0,int=0,int=0);
	~Time();
	Time(Time&);
	void setTime(int,int,int);
	void setHour(int );
	void setMinute(int );
	void setSeconds(int );
	int getHour();
	int getMinutes();
	int getSeconds();
	void getTime();
	friend void operator <<(ostream&,Time&);
	friend void operator >>(istream&,Time&);
	void operator=(Time&);
	bool operator==(Time t1){
		if((h==t1.h)&&(m==t1.m)&&(s==t1.s))
			return true;
		else
			return false;
	}	
};
void Time::setHour(int h1){
	h=h1;
}
void Time::setMinute(int m1){
	m=m1;
}
void Time::setSeconds(int s1){
	s=s1;
}
int Time::getHour(){
	return h;
}
int Time::getSeconds(){
	return s;
}
int Time::getMinutes(){
	return m;
}
void Time::operator=(Time &t){
	cout<<"\nTime through oveloaded assignment statement\n";
	h=t.h;
	m=t.m;
	s=t.s;
}
Time::Time(int h1,int m1,int s1){
	h=(h1>0&&h1<12)?h1:0;
	m=(m1>0&&m1<60)?m1:0;
	s=(s1>0&&s1<60)?s1:0;
}
Time::~Time(){
	cout<<"\ndestructor call\n";	
}
	void Time::setTime(int h1,int m1,int s1){
		setHour(h1);
		setMinute(m1);
		setSeconds(s1);
	}
	
void Time::getTime(){
	cout<<"\n---Print Time---\n ";
	cout<<"\nHours:";
	cout<<h;
	cout<<"\nMinutes:";
	cout<<m;
	cout<<"\nSeconds";
	cout<<s;
}
void operator>>(istream& s1,Time &t){
	cout<<"\nEnter Hours:";
	s1>>t.h;
	cout<<"\nEnter Minutes:";
	s1>>t.m;
	cout<<"\nEnter Seconds:";
	s1>>t.s;	
}
void operator<<(ostream& s1,Time &t){
	cout<<"\nHours:";
	s1<<t.h;
	cout<<"\nMinutes:";
	s1<<t.m;
	cout<<"\nSeconds:";
	s1<<t.s;
}
Time::Time(Time &t1){
	h=t1.h;
	m=t1.m;
	s=t1.s;
}
int main() {
	Time t;
	cout<<"\nTime through Default Constructor called\n";
	cout<<t;
	Time t1(4,5,6);
	cout<<"\nTime through parametrized constructor\n";
	cout<<t1;
	cout<<"\nTime through copy constructor\n";
	Time t3(t1);
	cout<<t3;
	Time t4;
	cout<<"\nTime through setter/getter\n";
	t4.setTime(2,3,4);
	cout<<t4.getHour();
	cout<<t4.getMinutes();
	cout<<t4.getSeconds();

	Time t5;
	cout<<"\nTime through overloaded insertion and extraction operator";
	cin>>t5;
	cout<<t5;
//	cout<<"\nTime through overload assignment operator";
	Time t6;
	t6=t1;
	cout<<t6;
	cout<<"\n Time through overloaded equal operator";
	if(t5==t6){
		cout<<"t5 and t6 objects are equal";
	}
	else	
	{
		cout<<"t5 and t6 objects are not equal"; 
	}
		
	cout<<"\n---------End of program-----------"<<endl;		
	return 0;
}