#include <iostream>
using namespace std;

/*位数问题
在所有的n位数中，有多少个数中有偶数个3？（结果对12345取余）
如：输入2  输出73 
*/ 
int main()
{
	int f[1001][2],n,i,x;
	cin>>n;
	f[1][1]=1;f[1][0]=9;
	for(i=2;i<=n;i++)
	{
		x=(i==n)?8:9;
		f[i][0]=(f[i-1][0]*x+f[i-1][1])%12345;
		f[i][1]=(f[i-1][1]*x+f[i-1][0])%12345;
	 } 
	 cout<<f[n][0];
	return 0;
}

