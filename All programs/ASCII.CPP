#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 clrscr();
 int v;
 char a;
 //cin>>a; AS IT CANT READ SP. CHAR
// a=getchar();   this works
 cin.get(a); //also
// v=a;
// v=toascii(a);
// cout<<v<<endl;

 cout<<toascii(a);
 getch();
 for (int i=33;i<=255;i+=1)
 cout<<char(i)<< "    "<<toascii(i)<<endl;
}

