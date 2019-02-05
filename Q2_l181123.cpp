#include<iostream>
#include"rect.h"
using namespace std;





int main()
{ 
	int a;
	rectangle r1;
	while(8)
	{cout<<"\n press 1 for lenght\n pres 2 for width \n press 3 to set lenght\n press 4 to set width\n press 5 to rotate the rectangle\n press 6 to draw\n";
	cin>>a;
	if (a==1)
	r1.getlen();
	if(a==2)
	r1.getwidth();
	if(a==3)
	{
		cout<<"enter lenght";
		r1.setlen();
	}
	if(a==4)
	{
		cout<<"enter width";
		r1.setwidth();
	}
	if(a==5)
		r1.rotaterect();

	if(a==6)
		r1.draw();
	}

}