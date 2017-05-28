/*
1002. 三角形 (Standard IO)
输入三角形三边长a,b,c（保证能构成三角形），输出三角形面积。
输入
一行三个用一个空格隔开的实数a,b,c，表示三角形的三条边长。

输出
输出三角形的面积，答案保留四位小数。

样例输入
3 4 5

样例输出
6.0000

数据范围限制
1<=a,b,c<=10000
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,s,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(4)<<s<<endl;
	return 0;
}
