//This is program to calculate sumj of two digits of num.
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int number,remainder,digit1,sumofdigits;
 cout<<"\nPlease enter a two digit no.";
 cin>>number;

 remainder=number%10;
 digit1=number/10;
 sumofdigits=remainder+digit1;
 cout<<"\nSum of two digits is "<<sumofdigits;
 getch();
 }
