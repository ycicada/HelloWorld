//交换a,b的值（不用函数实现）
//输入a,b的值，输入b,a
//输入3 4；输出4 3 

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

	int a,b;
	cin>>a>>b;
	//显示原来的a,b值及地址	
	cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;
	//交换
	int t;//t作为中间变量
	t = a;
	a = b;
	b = t;
	
	//输出交换后的结果，其实地址不变，只是值变了 
	cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;
	
	return 0;
}

