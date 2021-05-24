#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
struct date
{
 int d;
 int m;
 int y;
};
class EMP
{
 int no;
 date dob;
 char name[21];
 unsigned int sal; //coz sal cant be -ve
  public:

 EMP()  //default constructor
 {
  no=1;
  dob.d=01;
  dob.m=01;
  dob.y=2008;
  strcpy(name,"no name ") ;
  sal=10001;
 }
 ~EMP(){cout<<"\nDestroyed";}
 void read();
 void disp();
};
void EMP::disp()
{
 cout<<"\nName of Employee is  		   :";
 puts(name);
 cout<<"\nDate of birth of that emplyee is :"<<dob.d<<"."<<dob.m<<"."<<dob.y;
 cout<<"\nThe Employee the number is       :"<<no;
 cout<<"\nSalary is                        :"<<sal;
}
void EMP::read()
{
    cout<<"\nPlease enter name                  :";
    gets(name);
    cout<<"\nplease enter date of birth         :" ;
    cin>>dob.d>>dob.m>>dob.y;
    cout<<"\nPlease enter Employee No.          :";
    cin>>no;
    cout<<"\nPlease enter Salary  (sal<=65,535) :";
    cin>>sal;
}
void main()
{
 clrscr();
 EMP a;
 a.read();
 a.disp();
 getch();
}