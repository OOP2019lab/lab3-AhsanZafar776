#include<iostream>
#include"rect.h"
using namespace std;





void rectangle :: getlen()
{
	cout<<len<<endl;
}
void rectangle :: getwidth()
{
	cout<<width<<endl;
}
void rectangle :: setlen()
{
	int a;
	cin>>a;
	len=a;
}
void rectangle :: setwidth()
{
	int a;
	cin>>a;
	width=a;
}
void rectangle :: rotaterect()
{
	int a;
	a=len;
	len=width;
	width=a;
}
void rectangle :: draw()
{
	for(int i =0;i<len;i++)
	{
		for(int j=0;j<width;j++)
			cout<<"*";
		cout<<endl;
	}
}