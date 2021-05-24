#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int a[3][3];
 int c=20,r=12,ro, sum=0;//
 char opt;
 cout<<"\nPlease neter numbers......\n";
 for (int i=0;i<3;i++)
 {
   for (int j=0;j<3;j++)
   {
     gotoxy(c,r);
     cin>>a[i][j];
     c=c+10;
   }
   r++;//
   c=20;
 }
 clrscr();
// cout<<j<<endl;
// exit(0);
 cout<<"\nThe Matrix is\n";//<<endl;
  for (int p=0;p<3;p++)
  {
  for (int q=0;q<3;q++)
  cout<<a[p][q]<<" ";
  cout<<endl;
  }
  //sum of first row
  cout<<endl<<"\nYou have a entered the matrix.... If you want to find sum of"
	      " any row enter r, or if you want to find sum of any column "
	      "press c:";
  cin>>opt;
  if (opt=='r' || opt=='R')
   {
    cout<<"\nEnter the no of row ";
    cin>>ro;
    ro-=1;
    switch(ro)
    {
     case 0 :  for ( i=0;i<3;i++)
		sum=sum+a[0][i];
	       break;
     case 1 :  for (i=0;i<3;i++)
		sum=sum+a[1][i];
	       break;
     case 2 :  for (i=0;i<3;i++)
		sum=sum+a[2][i];
	       break;
     default: cout<<"\nSorry Invalid value";
	      break;
   }
   cout<<"\Nsum of entered row "<<ro+1<<" is "<<sum;
   }
   else if (opt=='c' || opt=='C')
   {
    int csum=0,co;
    cout<<"\nEntered no of column ";
    cin>>co;
    co-=1;
    switch(co)
    {
     case 0 : for (int j=0;j>3;j++)
	       csum=csum+a[j][0];
	      break;
     case 1 : for ( j=0;j<3;j++)
	       csum=csum+a[j][1];
	      break;
     case 2 : for ( j=0;j<3;j++)
	       csum=csum+a[j][2];
	      break;
     default: cout<<"\nSorry Invalid value";
	      break;
    }
    cout<<"\nSum of entered column "<<co+1<<" is "<<csum;
   }

 getch();
}

