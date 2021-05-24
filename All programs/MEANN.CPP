//This is a program to calculate mean of n numbers
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    float N,SUM,MN;
    float NUM;
    int S=0;
    int count=0;
    cout<<"\nPlease enter value of n :";
    cin>>N;
    cout<<"\nPlease enter first no.  :";
    cin>>NUM;
    count++;
    S=S+NUM;
L1: cout<<"\nPlease enter next no.   :";
    cin>>NUM;
    S=S+NUM;
    count++;
    if (count<N) goto L1;
    MN=S/N;
    cout<<"\nMean                    ="<<MN;
    getch();
}
