//this is a program of AP.............

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int a,n,d,opt,an,sn;
 cout<<"\nPlease enter a first term of A.P. ***************:";
 cin>>a;
 cout<<"\nPlease enter the common difference of A.P.*******:";
 cin>>d;
 cout<<"\nPlease enter no. of terms of that A.P.:**********:";
 cin>>n;
 cout<<"\n\nIf you want to find nth` term of ap************"
       " press 1*************************"
       "\n\nIf you want to find Sum of n terms*************"
       " press 2*************************"
       "\n\nIf you want to find full AP. series************"
       " press 3*************************"
       "\n\nPl enetr your choice ...:**********************" ;
 cin>>opt;
 switch(opt)
 {
   case 1:an=a+(n-1)*d;
	  cout<<"\nThe nth` term the ap is "<<an;
	  break;

   case 2:sn=n/2*(2*a+(n-1)*d);
	  cout<<"\nThe sum of n terms of that ap is "<<sn;
	  break;

   case 3:an=a+(n-1)*d;
	  for(;a<=an;a=a+d)
	    cout<<a<<endl;


	   break;
}
 getch();
}