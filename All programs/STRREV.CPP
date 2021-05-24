#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

void  main()
{
 clrscr();
 char *ab,*bc;
 cout<<"\nPlease enter your name....";
 gets(ab);
 bc=strrev(ab);
 puts(bc);
 getch();
}

