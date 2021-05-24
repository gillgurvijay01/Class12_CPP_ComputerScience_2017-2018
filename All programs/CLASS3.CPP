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
 stu a[5];
 cout<<"\nPlease enter details of five students ad follows  ";
 for(int i=0;i<5;i++)
  a[i].read();
 cout<<"\nThe details of five students is as follows        ";
 for(i=0;i<5;i++)
  a[i].disp();
 getch();
}