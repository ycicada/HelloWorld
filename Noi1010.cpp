#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*
1010. �ʼİ��� (Standard IO)
ʱ������: 1000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����

ĳ�ʾֶ��ʼİ��������¹涨������������������30ǧ��,�����ʼģ��Կ����ʼĵİ���ÿ����������0.2Ԫ���ټ��ϸ����±�����wei����Ľ����
   
����(ǧ��)      �շѱ�׼(Ԫ/����)          
wei<=10              0.80        
10<wei<=20        0.75         
20<wei<=30        0.70 
�����дһ����������������������������û�Fail����ʾ�޷��ʼġ�

����

����һ������������ʾ�ʼİ�����������

���

�����Ӧ�ķ���(�𰸱���2λС��)��Fail����ʾ�޷��ʼġ�

��������

7

�������

5.80

���ݷ�Χ����
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

