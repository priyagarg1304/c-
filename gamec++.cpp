#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>
void main()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n";
cout<<"                            LOADING ";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
delay(50);cout<<".";
clrscr();
delay(200);cout<<"\n\n STARTING THE BET";delay(100);cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".\n";
delay(1000);
delay(600);
clrscr();
start:
cout<<"\n\t\t\t      PLAY STATION  ";
delay(200);
char choice='y';
int ch,k,c=0;//c is score
cout<<"\nenter choice\n1.alphabet game\n2.number game\n3.Exit\n";
cin>>ch;
clrscr();
if(ch==1)
 {  while(choice=='y'||choice=='Y')
 {
char ran;int choose,a=26;
randomize();
ran=char(65+random(a));
cout<<"ENTER CHOICE IN ALPHABET GAME\n1.choose vowvels\n2.consonent\n3.choose an alphabet = ";
cin>>choose;    cout<<"\n";
switch(choose)
{
case 1:if(ran=='A'||ran=='U'||ran=='O'||ran=='I'||ran=='E')
       {cout<<"\n CONGRATULATIONS! YOU WIN!!! \ncomputer's alphabet is = "<<ran;c++;}
       else {cout<<"\noops!you lose\ncomputer's alphabet is a consonent = "<<ran;c--;}
break;

case 2:if(ran!='A'||ran!='U'||ran!='O'||ran!='I'||ran!='E')
       {cout<<"\n CONGRATULATIONS! YOU WIN!! \ncomputer's alphabet is = "<<ran;c++;}
       else {cout<<"\noops!you lose\ncomputer's alphabet is a vowvel = "<<ran;c--;}
break;

case 3:char n;
       cout<<"enter n(A to Z)=";
       cin>>n;
       if(n==ran)
       {cout<<"\n\n CONGRATULATIONS! YOU WIN!! \n "<<" computer's alphabet is = "<<ran<<" and your alphabet is = "<<n;
	c++;
       }
       else
       {  cout<<"\n\noops!you lose\n "<<"computer's alphabet is = "<<ran<<" and your alphabet is = "<<n;
       c--;}break;
       default:cout<<"\nWRONG CHOICE";
}

cout<<"\n\ndo you want to continue bet in albhabet ???";
cin>>choice;clrscr();
if(choice=='n'||choice=='N')
{cout<<"\n\nyour total score = "<<c; delay(900);clrscr();
goto start;
} }    }

else if(ch==2)
{
while(choice=='y'||choice=='Y')
{
int a=50,n,ran,choose,c=0;
cout<<"\nWhat do you want in number game ??\n1.choose even(1 for each win)\n2.choose odd(1 for each win)\n3.enter range of 10 no.s(2 for each win)\n4.enter a no.(4 for each win)\n";
cin>>choose;
randomize();
ran=random(a);
switch(choose)
{
case 1:if(ran%2==0)
       {cout<<"\n\nCONGRATULATIONS!!!YOU WINcomputer's no. is even and = "<<ran;c++;}
       else {cout<<"oops!! you lose computers no. is odd = "<<ran;c--;}
       break;

case 2:if(ran%2!=0)
       {cout<<"\n\nCONGRATULATIONS!!! YOU WINcomputer's no. is odd and = "<<ran;
       c++;}
       else {cout<<"oops!! you lose computers no. is even = "<<ran;c--;}
       break;

case 3:cout<<"enter the first and last element of range\n";
       int beg,last;
       cout<<"enter first no. of range = ";
       cin>>beg;
       cout<<"enter last no. f range";
       cin>>last;
       if(last-beg==10)
	{if(ran>=beg&&ran<=last)
	{cout<<"CONGRATULATIONS! YOU WIN!! \ncomputers no. is = "<<ran<<" and your range is = "<<beg<<"to"<<last;
	 c+=2;}
	else
	{cout<<"oops! you lose \nComputer's no. "<<ran<<" is out of your range ";
	c--;}
       }
       else if(last-beg>10)
	    cout<<" RANGE too long ";
	    else cout<<" RANGE too short ";
       break;

case 4:cout<<"enter n {from 0 to 49}= ";
       cin>>n;
       if(n==ran)
       {cout<<"\n\nyou win"<<" computer's no. is "<<ran<<" and your no. is "<<n;
	c+=4;
	}
       else
      {cout<<"oops!you lose "<<"computer's no. is "<<ran<<" and your no. is "<<n;
      c--;}break;

default:cout<<"wrong choice";
}

cout<<"\n\ndo you want to continue bet in number ???";
cin>>choice;
clrscr();
if(choice=='n'||choice=='N')
{    cout<<"\n\nyour total score = "<<c;
     delay(800);
     clrscr();
     goto start; }}   }
else if(ch==3)
{cout<<”\n\n\n\n\n\n\n\n\t\t\t         THANK YOU”;
delay(1000);
exit(0);
getch();}



