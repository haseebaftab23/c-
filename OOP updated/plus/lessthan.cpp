#include<iostream.h>
#include<conio.h>
class Distance{
	int feet;
	float inches;
	public:
	Distance():feet(0),inches(0.0)
	{}
	Distance(int f,float in):feet(f),inches(in)
	{}
	void show(){
		cout<<feet<<":"<<inches;
	}
	int  operator < (Distance) const;
};
int  Distance :: operator < (Distance d2)const{
	float f1=feet+inches/12;
	float f2=d2.feet+d2.inches/12;
	if(f1<f2)
		return 1;
		else
			return 0;
}
int main(){
Distance d1(3,4);
Distance d2(5,6);
if(d1<d2)
	cout<<"d1 is less than d2";
else
	cout<<"d2 is less than d1";
return 0;
}