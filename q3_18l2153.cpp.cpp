// q1 lab 1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
int main()
{
	int x=1; int y=2;int z=3;
	int *p=nullptr;
	int *q=nullptr;
	int  *r=nullptr;
	p=&x;
	q=&y;
	cout<<"enter value of x"<<x<<endl;
	cout<<"enter value of y"<<y<<endl;
	cout<<"p"<<*p<<endl;
	cout<<"q"<<*q<<endl;
	int temp=0;
	temp=x;
	z=x;
z=temp;
	
	temp=y;
	x=y;
	x=temp;
	
	temp=z;
	y=z;
	y=temp;
	
	cout<<"value of x after swapping"<<x<<endl;
	cout<<"value of y after swapping"<<y<<endl;
	cout<<"value of p after swapping"<<p<<endl;
	cout<<"value of q after swapping"<<q<<endl;
	cout<<"value of *p after swapping"<<*p<<endl;
	cout<<"value of *q after swapping"<<*q<<endl;
	int *temp2=nullptr;
	temp2=p;
	r=p;
	r=temp2;
temp2=q;
p=q;
p=temp2;
temp2=r;
q=r;
q=temp2;
cout<<"x after pointer swapping"<<x<<endl;
cout<<"y after pointer swapping"<<y<<endl;
cout<<"p after pointer swapping"<<p<<endl;
cout<<"q after pointer swapping"<<q<<endl;
cout<<"*p after pointer swapping"<<*p<<endl;
cout<<"*q after pointer swapping"<<*q<<endl;
	return 0;
}