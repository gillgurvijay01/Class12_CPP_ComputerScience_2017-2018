#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char a[50];
 int r;
 cout<<"\nPress the roll no         :";
 cin>>r;//
// getch();
 cout<<"\nPlease enter your name....:";
// cin.getline(a,50);
 gets(a);
 cout<<"\nEntered name is "<<a<<" and roll number is "<<r;
 getch();
}