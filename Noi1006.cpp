#include <iostream>
//#include <cstdio>
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;
/*
1006. 捡石头 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  

题目描述

憨厚的老农夫昨天捡到了3块小石头，他想再去捡一个小石头,让这4个石头正好一共重20斤，请问他应该去捡一个多少斤的石头?

输入

三个整数a,b,c,是这三个石头的重量(斤)

输出

一个数，表示农夫应该去捡一个多少斤的石头。

样例输入

3 5 7

样例输出

5
*/
int main()
{
 int a,b,c,d;
 cin>>a>>b>>c;
 cout<<20-a-b-c;
	return 0;
}

