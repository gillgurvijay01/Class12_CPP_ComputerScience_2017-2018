#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int *a,n,prod=1,multi=1,sumo=0,sume=0;
 cout<<"\nEnter no of elements....";
 cin>>n;
 a=new int[n];
 for (int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 clrscr();
 cout<<"\nArray A={";
 for (int j=0;j<n;j++)
 {
  cout<<a[j]<<",";
 }
 cout<<"\b}";
 for (int k=0;k<n;k++)
 {
	if (k==0 || k%2==0) //IF FOR PRODUCT AND SUM OF ELEMENTS AT EVEN PLACES
	{
	prod=prod*a[k];
	sume=sume+a[k];
	}
		else if (k%2!=0)// " " "      "   "   "    "     "  ODD    "

		{
		multi=multi*a[k];
		sumo=sumo+a[k];
		}
 }
 cout<<endl<<endl<<"\nODD:-\t\tEVEN:-";
 cout<<"\nPRODUCT="<<prod<<"\t\t\b\b\b\b\b\b\b\bPRODUCT="<<multi;
 cout<<"\nSUM="<<sume<<"\t\tSUM="<<sumo;
 getch();
}

