#include<fstream.h>
#include<conio.h>
void freplace()
{
 fstream f1;
 f1.open("abc.txt",ios::in);
 fstream f2("temp.txt",ios::out);
 char ch;
 while(!f1.eof())
 {
  ch=f1.get();
  if(ch==' ') ch='=';
  f2<<ch;
 }
 f1.close();
 f2.close();
}
 void main()
 {
  clrscr();
  freplace();
  getch();
 }


