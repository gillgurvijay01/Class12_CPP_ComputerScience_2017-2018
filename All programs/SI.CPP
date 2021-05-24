// This is program to find simple intrest

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int P;
 int T;
 float R;
 float SI;
 cout<<"\nPlease enter Principal amount: ";
 cin>>P;
 cout<<"\nPlease enter rate of intrest:  " ;
 cin>>R;
 cout<<"\nPlease enter time(in Years):   ";
 cin>>T;
 SI=(P*R*T)/100;
 cout<<"\nSimple intrest is  :           "<<SI;
 getch ();
}