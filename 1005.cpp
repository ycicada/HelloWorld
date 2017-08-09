#include <iostream>
#include <cmath> 
#include <cstdio>
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

//oj.noi.cn 1005
//按年利率R%存入本钱X，存入P年后的本利合计为Y=X*((100+R)/100)^P，求Y的值。
//输入一行三个空格隔开的实数R,X,P
//输出收益Y，答案保留两位小数。
int main()
{
	float r,x,p,y;
	cin>>r>>x>>p;
	y=x*pow((1+r/100),p);
	printf("%0.2f",y);

	return 0;
}

