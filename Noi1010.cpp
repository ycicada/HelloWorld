#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*
1010. 邮寄包裹 (Standard IO)
时间限制: 1000 ms  空间限制: 262144 KB  具体限制  

题目描述

某邮局对邮寄包裹有如下规定：若包裹的重量超过30千克,不予邮寄，对可以邮寄的包裹每件收手续费0.2元，再加上根据下表按重量wei计算的结果：
   
重量(千克)      收费标准(元/公斤)          
wei<=10              0.80        
10<wei<=20        0.75         
20<wei<=30        0.70 
请你编写一个程序，输入包裹重量，输出所需费用或”Fail”表示无法邮寄。

输入

输入一个正整数，表示邮寄包裹的重量。

输出

输出对应的费用(答案保留2位小数)或“Fail”表示无法邮寄。

样例输入

7

样例输出

5.80

数据范围限制
*/
int main()
{
    int wei;
    cin>>wei;
    if (wei>30)
    	cout<<"Fail"<<endl;
    else
    	if (wei>20)
    		cout<<fixed<<setprecision(2)<<15.7+(wei-20)*0.7<<endl;
    	else
    		if(wei>10)
    			cout<<fixed<<setprecision(2)<<8.2+(wei-10)*0.75<<endl;
    		else
    			cout<<fixed<<setprecision(2)<<0.2+wei*0.8<<endl;
	return 0;
}

