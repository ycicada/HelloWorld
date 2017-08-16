#include <iostream>
using namespace std;

int k=0,n;

void mov(int n,char a,char c,char b)
{
	if(n==0) return;
	mov(n-1,a,b,c);
	k++;
	cout<<k<<":"<<a<<"->"<<c<<endl;
	mov(n-1,b,c,a); 
}

 
int main()
{
	cout<<" n=";
	cin>>n;
	mov(n,'a','c','b');
	
	return 0;
}

