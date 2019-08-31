#include<iostream.h>
#include<conio.h>
//#include<exception.h>
//tHIS PROGRAM HAS OVERLOADED INSERTION AND EXTRACTION OPERATOR.
class Distance{
	int feet;
	float inches;
	public:
		Distance(){
			feet=0;
			inches=0.0;
		}
		Distance(int f,float in){
			feet=f;
			inches=in;
		}
		//istream is input_stream used for input in object.
		friend istream& operator >> (istream& s,Distance& d);
		friend void operator <<(ostream& s,Distance& d);
};
istream& operator >>(istream& s,Distance& d){
	cout<<"enter feet:";
	s>>d.feet;
	cout<<" Enter inches:";
	s>>d.inches;
	return s;
}
void operator << (ostream& s,Distance& d){
	s<<d.feet<<"-"<<d.inches;
	//return s;invalid because return type is void
}
 main(){

	 //try{
	Distance dist(1,2);
	Distance dist2(3,4);
	cin>>dist>>dist2;//here note direct input in objects which is possible by overloaded extraction operator(>>)
	//,,,cin is object of istream which catch by 's' and address of 'dist' is catch by d in defination of these overloded function.
	cout<<"\ndist object has values for feet and inches\n";
	cout<<dist;
 //	cout<<dist<<dist2;//concatination of insertion operator is not possible in this case because return type is void 
}   
  /* study this.....by referce return ta k object ka address mil jaye,agar ye member fun hota to kisi object
k respective call hota to cin>>obj cin to us class ka obj hi nai
to phir ye bat clear ha k ye member function ni ho skta , phr friend fun isliye banaye han ta k private data member bahir 
access ho jain,bcoz frind kisi obj k refernce sy call ni hota to  isliye 2no oject pass karny par ry hn,
cin k liye istream ka qk wo istream ka object ha jab k dist1 bhi(jis ma value leni ha)
,,agar ham by refence ni pass karwaty to phr to koi aur obj ma input hoti rahy gi to ham to exact usi ma chah ry hn 
to by reference pass kia..*/