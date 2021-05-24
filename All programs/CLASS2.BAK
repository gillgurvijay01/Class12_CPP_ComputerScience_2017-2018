#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

class stu
{
  int r;
  char *n;
  float m;
public:
  void read();
  void disp();
  void read1(int,char*,float);

};
void stu::read1(int a,char *b,float c)
{
 r=a;
 strcpy(n,b);
 m=c;
}
void stu::read()
{
   cout<<"\nPlease enter name      ";
   gets(n);
   cout<<"\nPlease enter  roll no. ";
   cin>>r;
   cout<<"\nPlease enter marks     ";
   cin>>m;
}

void stu::disp()
{
   cout<<"\nMarks obtained  =="<<m;
   cout<<"\nroll no         =="<<r;
   cout<<"\nName            ==";
   puts(n);
}
void main()
{
 clrscr();
 stu a;
 a.read();
 a.disp();
 a.read1(5,"raam",100);
 a.disp();
 getch();
}