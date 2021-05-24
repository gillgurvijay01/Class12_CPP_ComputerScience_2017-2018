#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int ALCHK(char *a)
{
 int z=0;
 for(int i=0;i<=strlen(a);i++)
 {
  if (isalpha(a[i]))
  cout<<"\npresent alpha " ;
  if (a[i]=='Z')
    z++;
 }
 return(z);
}
void main()
{
 clrscr();
 char *a;
 cout<<"\nPlease enter array ";
 gets(a);
 int q=ALCHK(a);
 cout<<q;
 getch();
}