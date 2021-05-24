#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int N,NUM,O=0,C=0;
l1: 	cout<<"\nPlease enter the number";
	cin>>NUM;
	N=NUM%2;
	if (N==1) O=O+1;
	C++;
	if (C<10) goto l1;
	cout<<"\nNO OF ODD NUMBERS ARE==="<<O;

	getch();
}