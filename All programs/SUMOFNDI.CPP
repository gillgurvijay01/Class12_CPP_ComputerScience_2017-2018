//This is program to calculate sum of  digits of num.
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int r,s=0;
 int n;
 cout<<"\nPlease enter a no.";
 cin>>n;

 while(n!=0)
 {
   r=n%10;
  // d=n/10;
   s=s+r;
   n=n/10;
 }
 cout<<"\nSum of two digits is "<<s;
 getch();
 }
