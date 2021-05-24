#include<iostream.h>
#include<conio.h>

float sim_int(const int p=50,int r=10,int t=5)
{
// p++;
 return((p*r*t)/100.0);
}
void main()
{
 int P,R,T;
 float si;
 cin>>P;
 cin>>R;
 cin>>T;
 //si=sim_int();
 cout<<sim_int()<<endl;
 getch();
 cout<<sim_int(P)<<endl;
 getch();
 cout<<sim_int(P,R)<<endl;
 getch();
 cout<<sim_int(P,R,T)<<endl;
 getch();
}