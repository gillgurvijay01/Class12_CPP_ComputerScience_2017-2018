#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int ax[10],big=0;
 int cnt=0;
 cout<<"\nPlease enter "<<cnt+1<<" number  :";
 cin>>ax[0];
 big=ax[0];
 cnt++;
 for (int i=1;i<=9;i++)
 {
   cout<<"\nPlease enter "<<cnt+1<<" number  :";
   cin>>ax[i];
   if (big<ax[i]) big=ax[i];
   cnt++;
 }
 cout<<"\nHighest number =="<<big;
 cout<<"\n All the numbers are as follows"<<endl;
 for (int j=0;j<=9;j+=1)
    cout<<ax[j]<<endl;
 getch();
}
