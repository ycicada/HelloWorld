#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	a=8;
	b=21;
	c=43;
	cout<<a<<endl;
	a=c,a=a+2,b=b+a+c;
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
