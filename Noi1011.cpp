#include <iostream>
#include <iomanip>  //fixed,setprecision()
//#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*
1011. 正方形 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  

题目描述

有一个正方形，四个角的坐标分别是（1，-1），（1，1），（-1，-1），（-1，1）。写一个程序，判断一个给定的点（x,y）是否在这个正方形内（包括正方形边界），如果在正方形内输出“Yes”，否则输出“No”。

输入

一行两个空格隔开的实数x,y，表示点的坐标。

输出

如果点(x,y)在正方形内输出“Yes”，否则输出“No”。

样例输入

0 0

样例输出

Yes

数据范围限制
*/
int main()
{
	float x,y;
	cin>>x>>y;
	if(x<=1 && x>=-1 && y<=1 && y>=-1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	//cout<<fixed<<setprecision(2);
	return 0;
}

