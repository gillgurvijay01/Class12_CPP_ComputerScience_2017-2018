#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int fvowelcnt (char *a)
{
 int scnt=0,i=0;
 for (;i<strlen(a);i++)
 {
  switch (a[i])
  {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O':
   case 'u':
   case 'U': scnt++;
	     break;
   }
   if (a[i]==32) ;
   }
   return (scnt);
   }


   int fcocnt(char *d)
   {
    int g=0;
    for (int t=0;t<strlen(d);t+=1)
    {
     if (isalpha(d[t]))
     if (!( ((d[t]=='a' || d[t]=='A')) || ((d[t]=='e') || (d[t]=='E')) || ((d[t]=='i') ||  (d[t]=='I')) || ((d[t]=='o') || (d[t]=='O')) || ((d[t]=='u')|| d[t]=='U')) )
     g++;
     if (d[t]==32) g--;
     }
     return(g);
   }



   void main()
   {
    clrscr();
    char *b;
    cout<<"\n Please enter text  :";
    gets(b);
    cout<<"\nNumber of vowels is :"<<fvowelcnt(b);
    cout<<"\nNumber of bytes consumed =="<<strlen(b);
    cout<<"\nNo of consconent=="<<fcocnt(b);
    getch();
    }

