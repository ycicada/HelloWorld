#include <iostream>
using namespace std;

int main()
{
    long n=1; //第n项的值，先初始化为0,相当于第1项 
	for ( int i=1;i<=50;i++) 
	{
		n = n + i-1;
		cout<<i<<":"<<n<<endl;
	}
	return 0;
}

