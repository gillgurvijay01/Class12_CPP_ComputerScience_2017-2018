#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void fcreate()
{
 fstream f;
 f.open("file2.txt",ios::out);
 char ch[81];
 for(int i=1;i<=5;i++)
 {
  gets(ch);
  f<<ch<<endl;
 }
 f.close();
}

void fdisp()
{
 fstream f;
 char ch[81];
 f.open("file2.txt",ios::in);
 for(int i=1;i<=5;i++)
 {
  f>>ch;
  cout<<ch<<endl;
 }
 f.close();
}
void fdisp2()
{
 fstream f;
 f.open("file2.txt",ios::in);
 char a;
 while(!f.eof())
 {
  a=f.get();
  cout<<a;
 }
 f.close();
}
void fdispalpha()
{
 fstream f;
 f.open("file2.txt",ios::in);
 char a;
 while(!f.eof())
 {

  a=f.get();
  cout<<a;
 }
 f.close();
}

void main()
{
 clrscr();
// fcreate();
// fdisp();
 fdisp2();
 getch();
}
