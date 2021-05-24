#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
int fwordcnt(char *a)
{
 int wcnt=1;
 for (int i=0;i<strlen(a);i++)
 {
  if ((isalpha(a[i-1])) || (isdigit(a[i-1])) )
  if ((a[i]==32) && ((isalpha(a[i+1])) || (isdigit(a[i+1]))))
  wcnt++;
 }
 return (wcnt);
}
void main()
{
 clrscr();
 char *b;
 cout<<"\nPlease enter string...:";
 gets(b);
 cout<<"\n No. of words =="<<fwordcnt(b);
 getch();
}
