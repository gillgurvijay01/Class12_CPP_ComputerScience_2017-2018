#define Diff(N1,N2) ((N1>N2)?N1-N2:N2-N1)
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A, B,NUM[]={10,23,14,54,32};
 for(int CNT=4;CNT>0;CNT--)
 {
  A=NUM[CNT];
  B=NUM[CNT-1];
  cout<<Diff(A,B)<<'#';
  }
  getch();
}