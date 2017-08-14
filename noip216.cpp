#include <iostream>
using namespace std;

/*fibonacci
1 2 3 5 8 13  

*/ 
int main()
{
	int n,f1=1,f2=2,f3;
	cin>>n;
	cout<<"1:1 2:2 ";
	for(int i=3;i<=n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<i<<":"<<f3<<" ";
	}
	cout<<f3;
	return 0;
}

