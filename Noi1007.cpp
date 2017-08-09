#include <iostream>
#include <cmath>
//#include <cstdio>
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;
/*
1007. 计算余数 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  

题目描述

计算两个双精度浮点数a和b相除的余数，a和b都是正数。这里余数（r）的定义是：a = k * b + r，其中 k是整数， 0 <= r < b。

输入

一行两个空格隔开的数a和b。

输出

输出a除以b的余数(答案保留两位小数)。

样例输入

3 2

样例输出

1.00
*/

int main()
{
    float a,b,c;
    cin>>a>>b;
    c=a-b*floor(a/b);
    printf("%0.2lf",c);
	return 0;
}

