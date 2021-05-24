//This is program to calculate sum of 10 given numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int NUM;
    int N;
    int SUM=0;
    int count=0;
    cout<<"\n valuen";
    cin>>N;
    cout<<"\nPlease enter first no.";
    cin>>NUM;
    count++;
    SUM=SUM+NUM;
L1: cout<<"\nPlease enter next no.";
    cin>>NUM;
    SUM=SUM+NUM;
    count++;
    if (count<N) goto L1;
    cout<<"\nSum                  ="<<SUM;
    getch();
}