#include<iostream.h>
using namespace std;
main()
{
int vnum,hnum,point;
point=0;
char start,find;
cout<<"#########################################################################"<<endl;
cout<<"#                            Word Tracing Map Game                      #"<<endl;
cout<<"#########################################################################"<<endl;
cout<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<endl<<endl<<endl;
cout<<"A.PROGAMR         B.FACEBOOK         C.BLOGGER   D.GOOGLE   E.TUMBLR "<<endl<<endl;
cout<<"Instructions : "<<endl<<endl
<<"1.Find the above words in the word tracing map game. Either diagonal,vertical,horizontal or vice versa."<<endl<<endl
<<"2.To do this so,find first the word you want."<<endl<<endl
<<"Locate the first letter of the word and locate the corresponding vertical number of it."<<endl<<endl
<<"3.Then locate the last letter of the word and locate its corresponding horizontal number."<<endl<<endl
<<"4.If you enter the correct numbers,you can unlock and vanish the word in the map and also you got points,"<<endl<<endl
<<"but if didn't get it,no-point and you'll proceed again to find another word."<<endl<<endl
<<"5.You only have 5 tries"<<endl<<endl
<<"6.Ex. We will track the word 'PROGRAM'. Let's find the first letter and its corresponding vertical number."<<endl<<endl
<<"It is in vertical number 1(which P-1). Then let's find for it's last letter and its corresponding horizontal number."<<endl<<endl
<<" It is in horizontal number 7(which M-7)."<<endl
<<"So,we have track-down the word 'PROGRAM'"<<endl<<endl<<endl;
//start game
cout<<"Start the game (Y/N) : ";
cin>>start;
if(start=='N'||start=='n')
{
cout<<"Game Forfeited!";
}
else if(start=='Y'||start=='y')
{
cout<<endl<<endl;
cout<<"Let's find the word : ";
cin>>find;
if(find=='a'||find=='A')//find a
{
cout<<endl<<endl;
cout<<"You intend to find for the word 'PROGRAMR'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==8)
{
point+=10;
cout<<"You got it right, you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|     |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|     |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|     |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|     |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|     |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|     |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|     |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'FACEBOOK'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==3)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |     |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |     |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |     |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |     |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |     |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |     |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |     |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |     |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'BLOGGER'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==9&&hnum==1)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |     |     |     |     |     |     |     |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'GOOGLE'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |     |     |     |     |     |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'TUMBLR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==2)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |     |     |     |     |     |     |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<"Your total score is "<<point;
}
else if(find=='b'||find=='B')//find b
{
cout<<endl<<endl;
cout<<"You intend to find for the word 'FACEBOOK'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==3)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |     |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |     |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |     |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |     |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |     |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |     |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |     |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |     |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'PROGRAMR'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==8)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|     |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|     |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|     |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|     |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|     |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|     |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|     |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'BLOGGER'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==9&&hnum==1)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |     |     |     |     |     |     |     |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'GOOGLE'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |     |     |     |     |     |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'TUMBLR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==2)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |     |     |     |     |     |     |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<"Your total score is "<<point;
}
else if(find=='c'||find=='C')//find c
{
cout<<endl<<endl;
cout<<"You intend to find for the word 'BLOGGER'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==9&&hnum==1)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |     |     |     |     |     |     |     |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'FACEBOOK'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==3)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |     |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |     |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |     |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |     |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |     |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |     |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |     |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |     |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'PROGRAMR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==8)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|     |  W  |  R  |  E  |  G  |  G  |  O  |  L |   B |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|     |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|     |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|     |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|     |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|     |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|     |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'GOOGLE'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==4&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |     |     |     |     |     |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'TUMBLR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==2)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |     |     |     |     |     |     |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<"Your total score is "<<point;
}
else if(find=='d'||find=='D')//find d
{
cout<<endl<<endl;
cout<<"You intend to find for the word 'GOOGLE'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |     |     |     |     |     |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'FACEBOOK'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==3)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |     |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |     |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |     |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |     |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |     |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |     |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |     |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |     |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'BLOGGER'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==9&&hnum==1)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |     |     |     |     |     |     |     |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'PROGRAMR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|     |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|     |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|     |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|     |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|     |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|     |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'TUMBLR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==2)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |     |     |     |     |     |     |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<"Your total score is "<<point;
}
else if(find=='e'||find=='E')//find e
{
cout<<endl<<endl;
cout<<"You intend to find for the word 'TUMBLR'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==2)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |     |     |     |     |     |     |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'FACEBOOK'"<<endl<<endl;
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==2&&hnum==3)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |     |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |     |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |     |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |     |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |     |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |     |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |     |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |     |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find the word 'BLOGGER'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==9&&hnum==1)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |     |     |     |     |     |     |     |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|  G  |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'GOOGLE'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==4)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|  P  |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|  R  |  T  |  U  |  M  |  B  |  L  |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|  O  |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |     |     |     |     |     |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|  R  |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|  A  |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|  M  |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|  R  |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<endl<<endl<<endl;
cout<<"Find for the word 'PROGRAMR'";
cout<<"The vertical number corresponds to its first letter : ";
cin>>vnum;
cout<<endl<<endl;
cout<<"The horizontal number corresponds to its last letter : ";
cin>>hnum;
cout<<endl<<endl;
if(vnum==1&&hnum==8)
{
point+=10;
cout<<"You got it right,you have unlock the word in the map,you got "<<point<<" score";
cout<<endl<<endl<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
cout<<"| 1 |"<<""<<"|     |  W  |  R  |  E  |  G  |  G  |  O  |  L  |  B  |  D  |"<<""<<""<<"| 1 |"<<endl;
cout<<"| 2 |"<<""<<"|     |  T |   U  |  M  |  B  |   L |  R  |  D  |  E  |  I  |"<<""<<""<<"| 2 |"<<endl;
cout<<"| 3 |"<<""<<"|     |  K  |  W  |  P  |  P  |  K  |  A  |  D  |  B  |  G  |"<<""<<""<<"| 3 |"<<endl;
cout<<"| 4 |"<<""<<"|     |  O  |  O  |  G  |  L  |  E  |  P  |  P  |  O  |  G  |"<<""<<""<<"| 4 |"<<endl;
cout<<"| 5 |"<<""<<"|     |  O  |  I  |  X  |  K  |  N  |  T  |  L  |  A  |  E  |"<<""<<""<<"| 5 |"<<endl;
cout<<"| 6 |"<<""<<"|     |  B  |  J  |  S  |  E  |  T  |  G  |  L  |  X  |  V  |"<<""<<""<<"| 6 |"<<endl;
cout<<"| 7 |"<<""<<"|     |  E  |  K  |  V  |  W  |  I  |  T  |  N  |  N  |  I  |"<<""<<""<<"| 7 |"<<endl;
cout<<"| 8 |"<<""<<"|     |  C  |  L  |  T  |  D  |  S  |  Z  |  W  |  M  |  F  |"<<""<<""<<"| 8 |"<<endl;
cout<<"| 9 |"<<""<<"|  T  |  A  |  L  |  I  |  N  |  K  |  E  |  D  |  A  |  I  |"<<""<<""<<"| 9 |"<<endl;
cout<<"|10 |"<<""<<"|  Z  |  F  |  E  |  B  |  U  |  T  |  U  |  O  |  Y  |  H  |"<<""<<""<<"|10 |"<<endl;
cout<<""<<""<<""<<""<<"      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10  |"<<endl;
}
else
{
cout<<"Sorry,wrong numbers"<<endl<<endl;
}
cout<<"Your total score is "<<point;
}
}
else
{
cout<<"Out of the choices!";
}
return 0;
}
