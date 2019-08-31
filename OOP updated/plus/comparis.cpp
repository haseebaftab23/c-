#include<iostream.h>
#include<string.h>
class String{
	enum{sz=80};
	char str[sz];
	public:
	 String(){
		strcpy(str,"");
	 }
	 String (char s[]){
		strcpy(str,s);
	 }
	 void display()const{
		cout<<str;
	 }
	 void getStr(){
		cin.get(str,sz);
	 }
	 bool operator == (String ss)const{
		return (strcmp(str,ss.str)==0)?true:false;
	 }
};

void main(){
	String s1="yes";
	String s2="no";
	String s3;
	s3.getStr();
	if(s1==s3)
		cout<<"equal strings";
		else
		cout<<"different string";
}