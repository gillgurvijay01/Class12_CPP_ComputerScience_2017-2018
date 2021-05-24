//This is program to calculate PRODUCT of n given numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int NUM,N,R;
    float PROD=1;
    int count=0;
    cout<<"\nPlease enter value of n";
    cin>>N;
    cout<<"\nPlease enter first no.";
    cin>>NUM;
    count++;
    R=NUM%2;
    if (R==0)
    PROD=PROD*NUM;
L1: cout<<"\nPlease enter next no.";
    cin>>NUM;
    R=NUM%2;
    if (R==0)
    PROD=PROD*NUM;
    count++;
    if (count<N) goto L1;
    cout<<"\nPRODUCT                 ="<<PROD;
    getch();
}