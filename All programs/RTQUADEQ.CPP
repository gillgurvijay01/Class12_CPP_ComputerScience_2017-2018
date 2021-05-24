// This is program to find roots of quadratic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int a,b,c;
 float d,x1,x2;
 cout<<"\nPlease enter co-efficient of x^2:";
 cin>>a;
 cout<<"\nPlease enter co-efficient of x  :";
 cin>>b;
 cout<<"\nPlease enter constant           :";
 cin>>c;
 d=(b*b)-4*(a*c);
 if(d<0)
 {
   cout<<"\nRoots are not possible";
   getch();
 }
 else
 if(d==0)
 {
   x1=(-b+sqrt(d))/2*a;
   x2=(-b-sqrt(d))/2*a;
   cout<<"\nRoots are possible and are equal and are "<<x1<<" "<<x2;
   getch();
 }

 if(d>0)
 {
   x1=(-b+sqrt(d))/2*a;
   x2=(-b-sqrt(d))/2*a;
   cout<<"\nRoots are possible and are unequal and are "<<x1<<" "<<x2;
   getch();
 }
}