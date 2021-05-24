//This is program to observe the highest of 10 natural numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int NUM,HIGH;
    int count=1;
    cout<<"\nPlease enter first no.:";
    cin>>NUM;
    count=count+1;
    HIGH=NUM;
L1: cout<<"\nPlease enter next no. :";
    cin>>NUM;
    if(HIGH<NUM) HIGH=NUM;
    count=count+1;
    if (count<=10) goto L1;
    cout<<"\nHighest no            ="<<HIGH;
    getch();
}