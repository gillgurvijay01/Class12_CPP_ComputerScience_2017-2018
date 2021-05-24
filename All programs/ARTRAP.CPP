// This is a program to find area of trapezium
#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr ();
 float d1,d2,h,ar;
 cout<<"\nPlease enter any one of parallel sides of Trapezium:";
 cin>>d1;
 cout<<"\nPlease enter another parallel side of Trapezium    :";
 cin>>d2;
 cout<<"\nPlease enter the distance between parallel sides   :";
 cin>>h;
 ar=((d1+d2)*h)/2;
 cout<<"\nArea of Trapezium is                             :"<<ar;
 getch();
}

