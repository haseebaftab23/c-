#include<iostream.h>
#include<string.h>
class String{
	char str[80];//char array of size 80.
	public:
	 String(){
		strcpy(str,"");// it will call when s3 object will declare.
	 }
	 String (char s[]){
		strcpy(str,s);//receiving string by 's' and copy in str. 
	 }
	 void display()const{                        // """const""" jst read, not write/overwrite; obd;
		cout<<str;
	 }
	 void getStr(){
		cin>>str;
	 }
	 bool operator == (String ss)const{//bool is data type having 2 option true or false
		return (strcmp(str,ss.str)==0)?true:false;//strcmp is used for comparison of 2 strings         //true=> >, false=> <        A=65; a=97, ASCII #
		//here simple str is of s1 and ss.str is of s3 which is pass as an argument.
		//s1 calls this oveloaded operator and s3 pass ,if both strings are equal then return true
		//otherwise return false 
	 }
};

int main(){
	String s1="yes";
	String s2="no";
	String s3;
	s3.getStr();//enter a string which will compare with s1
	if(s1==s3)//if both are equal then return true
		cout<<"equal strings";
		else
		cout<<"different string";
		return 0;
}