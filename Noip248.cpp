#include <iostream>
#include <iomanip>
//#include <cstdio>
//#include <string>
//#include <cmath>
//#include <fstream>

using namespace std;

int a[10001]={1},n,total;
int search(int,int);
int print(int);
 
//ifstream fin("a.in");
//ifstream fout("a.out");

/*程序说明：输入自然数n，输出各种自然数和*/
int main()
{
    ios_base::sync_with_stdio(false);//解绑scanf&printf
    cin.tie(0);//解除cin&cout绑定
    //控制输出格式
	//cout<<fixed;//浮点数常规输出
    //cout<<scientific;//科学计算法输出
	//cout<<precision(5);//小数点保留位数
	cin>>n;
	search(n,1);
	cout<<"total="<<total<<endl;

	return 0;
}

int search(int s,int t=1)
{
	int i;
	for(i=a[t-1];i<=s;i++)
		if(i<n)
		{
			a[t]=i;
			s-=i;
			if(s==0) print(t);
				else search(s,t+1);
			s+=i;
		}
}

int print(int t)
{
	cout<<n<<"=";
	for(int j=1;j<=t-1;j++)
		cout<<a[j]<<"+";
	cout<<a[t];
	cout<<endl;
	total++; 
}
