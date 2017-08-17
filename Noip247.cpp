#include <iostream>
#include <iomanip>
//#include <cstdio>
//#include <string>
//#include <cmath>
//#include <fstream>

using namespace std;

//ifstream fin("a.in");
//ifstream fout("a.out");
int num=0,a[10001]={0},n,r;
bool b[10001]={0};
int search(int);
int print();

 
/*程序说明：设有n个整数集合{1，2，3...n}，从中任意取出r个数进行排列（r<n）,试列出所有的排列*/
int main()
{
    ios_base::sync_with_stdio(false);//解绑scanf&printf
    cin.tie(0);//解除cin&cout绑定
    //控制输出格式
	//cout<<fixed;//浮点数常规输出
    //cout<<scientific;//科学计算法输出
	//cout<<precision(5);//小数点保留位数
	
	cin>>n>>r;
	search(1);
	cout<<num<<endl;

	return 0;
}

int search(int k)
{
	for(int i=1;i<=n;i++)
	if(!b[i])
	{
		a[k]=i;
		b[i]=1;
		if(k==r) print();
		else search(k+1);
		b[i]=0;
	}
}

int print()
{
	num++;
	for(int j=1;j<=r;j++)
	cout<<setw(3)<<a[j];
	cout<<endl;
}
