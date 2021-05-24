// SI WITH FUNCTION
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
/*void si(float a,float b, float c)
{
 float si=(a*b*c)/100.0;
 cout<<"\nSimple Intrest=="<<si;
} */

float si(float a,float b, float c)
{
// float si=(a*b*c)/100.0;
// cout<<"\nSimple Intrest=="<<si;
//  return(si);
   return((a*b*c)/100.0);
}

void main()
{
 clrscr();
 float p,r,t,asi;
 cout<<"\nPlease enter Principal=======";
 cin>>p;
 cout<<"\nPlease enter Rate============";
 cin>>r;
 cout<<"\nPlease enter time(in years)==";
 cin>>t;
 //si(p,r,t);
 asi=si(p,r,t);
 cout<<asi<<setprecision(2);
 getch();
}
