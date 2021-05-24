#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class STU

{
  int r;
  float tm;
  char nam[21];
 public:
  void read();
  void disp();
};

void STU::read()
{
 cout<<"\nPlease enter the Roll no.  :";
 cin>>r;
 cout<<"\nPlease enter total marks   :";
 cin>>tm;
 cout<<"\nPlease enter name  	       :";
 gets(nam);
}

void STU::disp()
{
 cout<<"\nName of student is :";
 puts(nam);
 cout<<"\nRoll no. is	     :"<<r;
 cout<<"\nTotal Marks scored :"<<tm;
}

class SSTU:public STU

{
 int Class;
 char sec;
public:
 void SRead()
 {
//  read();
  cout<<"\nPlease enter class    :";
  cin>>Class;
  cout<<"\nPlease enter section  :";
  sec=getchar();
  }
  void SDisp()
  {
  // disp();
   cout<<"\nClass is   :"<<Class;
   cout<<"\nSection is :"<<sec;
  }
 };

void main()
{
 clrscr();
 SSTU a;
 a.read();
 a.SRead();
 a.SDisp();
 getch();
}