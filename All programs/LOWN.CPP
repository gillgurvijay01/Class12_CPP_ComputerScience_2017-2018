//This is program to observe the highest of N  numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int HIGH,N;
    float NUM;
    cout<<"\nPlease enter value of n:";
    cin>>N;
    if(N>0)
    {
    int count=0;
    cout<<"\nPlease enter first no. :";
    cin>>NUM;
    count=count+1;
    HIGH=NUM;
L1: cout<<"\nPlease enter next no.  :";
    cin>>NUM;
    if(HIGH>NUM)HIGH=NUM;
    count=count+1;
    if (count<N) goto L1;
    cout<<"\nLowest no             ="<<HIGH;
    }
    else
     cout<<"\nSorry !!!!!!";
    getch();
}