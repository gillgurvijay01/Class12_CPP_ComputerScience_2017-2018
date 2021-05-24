#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

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
//when we dont know the content of text file....
void fdispall()
{
 fstream f;
 f.open("file2.txt",ios::in);
 char a;
 while(!f.eof())
 {
  //f>>a;
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

  if(isalpha(a)) cout<<a;
  if(a=='\n') cout<<a;
 }
 f.close();
}

void fdispvowel()
{
 fstream f;
 f.open("file2.txt",ios::in);
 char a;
 while(!f.eof())
 {
  a=f.get();
   if(a=='A'||a=='a' ||
      a=='E'||a=='e' ||
      a=='I'||a=='i' ||
      a=='O'||a=='o' ||
      a=='U'||a=='u') cout<<a;
  if(a=='\n') cout<<a;
 }
 f.close();
}

int fcountalpha()
{
 fstream f;
 f.open("file2.txt",ios::in);
 int cnt=0;
 char a;
 while(!f.eof())
 {
  a=f.get();

  if(isalpha(a)) cnt++;  //cout<<a;
 }
 f.close();
 return(cnt);
}
void fdispcons()
{
 fstream f;
 f.open("file2.txt",ios::in);
 char a;
 while(!f.eof())
 {
  a=f.get();
   if(isalpha(a))
   if(!(a=='A'||a=='a' ||
	a=='E'||a=='e' ||
	a=='I'||a=='i' ||
	a=='O'||a=='o' ||
	a=='U'||a=='u'))  cout<<a;
 if(a=='\n') cout<<a;
 }

 f.close();
}




void main()
{
 clrscr();
// fcreate();
// fdisp();
// fdispall();
 fdispalpha();
 getch();

 fdispvowel();
 getch();

 cout<<"no of alphabets in text file == "<<fcountalpha()<<endl;
 getch();
 fdispcons();
 getch();

}
