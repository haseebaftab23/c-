#include <iostream>
#include<string>
#include<ctype.h>
#include<time.h>
using namespace std;

int main()
{
char name[100],c;
int l,i,r;
time_t t;
srand(unsigned(&t));
cout<< "\nWelcome to the NAME_ANALYSER CPP project!" ;
cout<<"\nEnter your name ";
cin>>name;
l=strlen(name);
for(i=0;i<l;i++)
{
c=toupper(name[i]);
cout<<"\n"<<c;
switch(c)
{
case'A': { 
r=(rand()%4);
switch(r)
{ 
case 0: cout<<"- affectionate"; break;
case 1: cout<<"- arrogant"; break;
case 2: cout<<"- amazing"; break;
case 3: cout<<"- adorable"; break;
} } break;
case 'B': {
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- beautiful"; break;
case 1: cout<<"- boring"; break;
case 2: cout<<"- bold"; break;
case 3: cout<<"- best"; break;
} } break;
case 'C':
{
r=(rand()%7);
switch(r)
{
case 0 : cout<<"- caring"; break;
case 1: cout<<"- careless"; break;
case 2: cout<<"- cute"; break;
case 3: cout<<"- cool"; break;
case 4: cout<<"- casual"; break;
case 5 :cout<<"- crazy"; break;
case 6: cout<<"- childish";break;
} } break;
case 'D': 
{
r=(rand()%5);
switch(r)
{
case 0 : cout<<"- dynamic"; break;
case 1: cout<<"- dumb"; break;
case 2: cout<<"- daring"; break;
case 3: cout<<"- delightful"; break;
case 4 : cout<<"- desperate"; break;
} } break;

 
case 'E':
{
r=(rand()%5);
switch(r)
{
case 0 : cout<<"- extraordinary"; break;
case 1: cout<<"- evil"; break;
case 2: cout<<"- excited"; break;
case 3: cout<<"- energetic"; break;
case 4: cout<<"- enthusiastic"; break;
} } break;
case'F' :
{
r=(rand()%5);
switch(r)
{
case 0 : cout<<" - fluent"; break;
case 1: cout<<"- foolish"; break;
case 2: cout<<"- fantastic"; break;
case 3: cout<<"- freaky"; break;
case 4: cout<<"- funny"; break;
} } break;
case'G' :
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- graceful"; break;
case 1: cout<<"- gigantic"; break;
case 2: cout<<"- good"; break;
case 3: cout<<"- great"; break;
} } break;
case'H':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- heavenly"; break;
case 1: cout<<"- hateful"; break;
case 2: cout<<"- hot"; break;
case 3: cout<<"- happy"; break;
} } break;
case 'I': 
{
r=(rand()%5);
switch(r)
{
case 0 : cout<<" - intelligent"; break;
case 1: cout<<"- idiotic"; break;
case 2: cout<<"- interesting"; break;
case 3: cout<<"- ignorant"; break;
case 4: cout<<"- irritating"; break;
} } break;
case'J' :
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- jovial"; break;
case 1: cout<<"- jeleaous"; break;
case 2: cout<<"- joyful"; break;
case 3: cout<<"- judicious"; break;
} } break;
case'K':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- kind"; break;
case 1: cout<<"- knowledgeable"; break;
case 2: cout<<"- keen"; break;
case 3: cout<<"- kissable"; break;
} } break;
case'L' :
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- lovable"; break;
case 1: cout<<"- lazy"; break;
case 2: cout<<"- lucky"; break;
case 3: cout<<"- loser"; break;
} } break;
case'M':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- mysterious"; break;
case 1: cout<<"- mean"; break;
case 2: cout<<"- magnificient"; break;
case 3: cout<<"- magical"; break;
} } break;
case'N':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- nice"; break;
case 1: cout<<"- naughty"; break;
case 2: cout<<"- natural"; break;
case 3: cout<<"- nervous"; break;
} } break;
case'O':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- obedient"; break;
case 1: cout<<"- obese"; break;
case 2: cout<<"- optimistic"; break;
case 3: cout<<"- outstanding"; break;
} } break;
case'P' :
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- patient"; break;
case 1: cout<<"- puntual"; break;
case 2: cout<<"- perfect"; break;
case 3: cout<<"- popular"; break;
} } break;
case'Q':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- quiet"; break;
case 1: cout<<"- quick"; break;
case 2: cout<<"- questionable"; break;
case 3: cout<<"- qualified"; break;
} } break;

case'R': 
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- respectable"; break;
case 1: cout<<"- restless"; break;
case 2: cout<<"- rare"; break;
case 3: cout<<"- responsible"; break;
} } break;
case 'S':
{
r=(rand()%7);
switch(r)
{
case 0 : cout<<"- sacred"; break;
case 1: cout<<"- sad"; break;
case 2: cout<<"- satisfied"; break;
case 3: cout<<"- stylish"; break;
case 4: cout<<"- silly"; break;
case 5: cout<<"- studious";break;
case 6: cout<<"- strong";break; 
} } break;
case'T': 
{
r=(rand()%8);
switch(r)
{
case 0 : cout<<"- trustworthy"; break;
case 1: cout<<"- talented"; break;
case 2: cout<<"- troublesome"; break;
case 3: cout<<"- tough"; break;
case 4: cout<<"- terrific"; break;
case 5: cout<<"- thoughtful";break;
case 6: cout<<"- tidy"; break;
case 7: cout<<"- tensed"; break; 
} } break;
case'U':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- ultimate"; break;
case 1: cout<<"- unique "; break;
case 2: cout<<"- useful"; break;
case 3: cout<<"- unstopable"; break;
} } break;
case'V':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- victorious"; break;
case 1: cout<<"- vulnerable"; break;
case 2: cout<<"- versatile"; break;
case 3: cout<<"- vibrant"; break;
} } break;
case'W': 
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- witty"; break;
case 1: cout<<"- wrong"; break;
case 2: cout<<"- wise"; break;
case 3: cout<<"- wonderful"; break;
} } break;
case'X': 
{
r=(rand()%2);
switch(r)
{
case 0 : cout<<"- xeric"; break;
case 1: cout<<"- xenophobic"; break;
} } break;
case'Y':
{
r=(rand()%3);
switch(r)
{
case 0 : cout<<"- young"; break;
case 1: cout<<"- youthful"; break;
case 2: cout<<"- yearning"; break;
} } break;
case'Z':
{
r=(rand()%4);
switch(r)
{
case 0 : cout<<"- zealous"; break;
case 1: cout<<"- zesty"; break;
} } break;
}
}
cout<<"\n \t By karthik";
return 0;
}
