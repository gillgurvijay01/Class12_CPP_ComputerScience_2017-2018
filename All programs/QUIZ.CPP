/*This is a program of game of quiz for each correct option you'll
get 5 points
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A1,A2,M=0;
 cout<<"\nThis is quiz test for each correct option you'll get 5 points ";
 cout<<"\n\n\nQ1. Who is Prime Minister of India";
 cout<<"\n     1.L.K.ADVANI         2. NARENDRA MODI";
 cout<<"\n     3.DONALD TRUMP       4. RAHUL GANDHI ";
 cout<<"\n      ";
 cin>>A1;
  if (A1==2) M=M+5;
 cout<<"\n\n\nQ2. Who is Chief Minister of Delhi";
  cout<<"\n     1.ARVIND KEJRIVAL         2. LALU PRASAD YADAV";
  cout<<"\n     3.KIRAN BEDI              4. TEJASVI YADAV ";
  cout<<"\n    ";
  cin>>A2;
  if (A2==1) M=M+5;
  cout<<"\n\n\n\nYOUR SCORE  ="<<M;
  getch();
}

