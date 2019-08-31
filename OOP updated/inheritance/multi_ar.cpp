	 #include<iostream.h>
	 #include<conio.h>
    #include<string.h>//for strcpy()
    //This program is about multiple inheritance with arguments..
	 class base1{
		int x,y;
		public:
		base1(int a,int b){//through constructor set values of x,y
			x=a;
			y=b;
		}
		void print(){
			cout<<"\nvalue of x="<<x;
			cout<<"\nvalue of y="<<y;
		}
	 };
	 class base2{
		char str[20];//char array which will store a string
		public:
		base2(char str1[20]){
			strcpy(str,str1);//strcpy(destination,source) this buil_in function is defined in string.h,
			//in simple words str=str1,but this syntax will be wrong
		}
		void print(){
			cout<<"\nPassed string=";
			cout<<str;
		}
	 };
	 class derive:public base1,public base2{//derive class inherit base1 and base2 class,which is multiple inheritance
		double d;//variable of duble type
		public:
		derive(int a,int b,char str1[20],double d1):base1(a,b),base2(str1){//derive class will receive 4 arguments
		//first 2 arguments for base class,3rd argument of char array str1[20] for base2,and 4th argument for derive class 
			d=d1;
		}
		void print1(){
			cout<<"\nvalue of double= ";
			cout<<d;
		}
	 };
	 main(){
		derive obj(2,3,"oop",5.6);
		obj.print1();//it will print double value
		obj.base2::print();//through this string will be display
		obj.base1::print();//through this values are printed
	 }