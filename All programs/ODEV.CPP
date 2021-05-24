//This is Program to see whether the no is even or odd
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int NUM,R;
 cout<<"\nPlease enter the no.";
 cin>>NUM;
 R=NUM%2;
 if (R==0)
   cout<<"\nThe no. "<<NUM<<" is even";
 else
  cout<<"\nThe no. "<<NUM<<" is odd";
 getch();
 }