//This is a program to calculate the new rate of ......
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
 clrscr();
 float am,off;
 int opt;
 float p,q,r;
 float nrte,disamt;
 cout<<"\nPlease enter amount of that thing**************************";
 cin>>am;
 cout<<"\nif that thing is on discount press 1.....******************"
       "\nOr, If is that thing is increased rate press 2.....********"<<endl;
 cin>>opt;
 switch (opt)
 {
  case 1 :// p=(100-off);
	   cout<<"\nPlease enter the rate of discount on that thing**";
	   cin>>off;
	   p=(100-off);
	   r=(p/100);
	   nrte=(r*am);
	   disamt=(am-nrte);
	   cout<<"\nThe new amount of that thing is====="<<setprecision(2)<<nrte<<" with a discount of Rs."<<setprecision(2)<<disamt<<" i.e. "<<off<<"%";
	   break;

  case 2 ://q=(100+off);
	  cout<<"\nPlease enter % of rate of increasment....*********";
	   cin>>off;
	   q=(100+off);
	   r=(q/100);
	   nrte=(r*am);
	   disamt=(nrte-am);
	   cout<<"\nThe new amount of that thing is Rs."<<setprecision(2)<<nrte<<" with a increasment of Rs."<<setprecision(2)<<disamt<<" i.e. "<<off<<"%";
	//   cout<<"\nThe new amount===="<<nrte<<endl;

	   break;

  default: cout<<"\nSORRY...............*****************************"
		 "\nWrong choice........*****************************";


   }
   getch();
   }


