#include<fstream.h>
#include<conio.h>

void freplace()
{
 fstream f("abc.txt",ios::in|ios::out);
 char ch;
 while(!f.eof())
 {
  ch=f.get();
  if(ch==' ')
  {
   ch='=';
   f.seekp(-1,ios::cur);
   f<<ch;
  }
 }
 f.close();
}
void main()
{

 clrscr();
 freplace();
 getch();
}
