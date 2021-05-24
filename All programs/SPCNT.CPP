#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int cnt_32(char *a)
{
 int spcnt=0;
 for (int i=0;i<=strlen(a);i++)
 {
  if (a[i]==32) spcnt++;
 }
 return(spcnt);
}
void main()
{
 clrscr();
 char *b;
 cout<<"\nPlease enter String="<<endl;
 gets(b);
 int cnt=cnt_32(b);
 cout<<"\nThe numbers of space characters are ="<<cnt;
 getch();
}
