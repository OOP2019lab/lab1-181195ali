#include <iostream>
using namespace std;
void Swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}
void Swapp(int *a,int *b)
{
	int* temp;
	temp=a;
	a=b;
	b=temp;

}
int main()
{
	int x = 2,y = 5;
	int* p = &x;
	int* q = &y;
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl;
	cout<<"p ="<<p<<endl;
	cout<<"q ="<<q<<endl;
	cout<<"*p ="<<*p<<endl;
	cout<<"*q ="<<*q<<endl;
	Swap(x,y);
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl;
	cout<<"p ="<<p<<endl;
	cout<<"q ="<<q<<endl;
	cout<<"*p ="<<*p<<endl;
	cout<<"*q ="<<*q<<endl;
	Swapp(p,q);
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl;
	cout<<"p ="<<p<<endl;
	cout<<"q ="<<q<<endl;
	cout<<"*p ="<<*p<<endl;
	cout<<"*q ="<<*q<<endl;
}