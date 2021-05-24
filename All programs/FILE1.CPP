#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void fcreate()
{
 fstream f;
 f.open("f1.txt",ios::out);
 char ch[81];
 for(int i=1;i<=5;i++)
 {
  gets(ch);
  for(j=0;j<strlen(ch);j++)
  {
  f<<ch<<endl;
 }
 f.close();
}
void main()
{
 clrscr();

 getch();
}