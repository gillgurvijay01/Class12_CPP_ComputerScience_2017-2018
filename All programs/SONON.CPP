//This is program to calculate sum of odd numbers numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int NUM;
    int N,R;
    int SUM=0;
    int count=0;
    cout<<"\n valuen";
    cin>>N;
	cout<<"\nPlease enter first no.";
    cin>>NUM;
    count++;
    R=NUM%2;
    if (R==0)
    SUM=SUM+NUM;
L1: cout<<"\nPlease enter next no.";
    cin>>NUM;
    R=NUM%2;
    if (R==0)
    SUM=SUM+NUM;
    count++;
    if (count<N) goto L1;
    cout<<"\nSum                  ="<<SUM;
    getch();
}