#include <iostream>
#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;
/*
1009. �������� (Standard IO)
ʱ������: 1000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����

�����ʵ���������������ֱ��ǣ��������ɲ衢��ˮ������С��������������Ů����������С��Ľ�������
����С��10�˵�С�鸺����ˮ�����water����
�������ڵ���10������������Ů����С�鸺�����������tree����
�������ڵ���10��������������Ů����С�鸺��ɲ裨���tea����
����С������������Ů�����������С����ܵ�����

����

һ�������ո������������ʾС����������Ů����������

���

�����Ӧ������

��������

5 3

�������

water

���ݷ�Χ����
*/ 
int main()
{
 int male,female;
 cin>>male>>female;
 int tatol=male+female;
 if (tatol<10)
    cout<<"water"<<endl;
 else 
     if (male>female)
         cout<<"tree"<<endl;
     else
         cout<<"tea"<<endl;
	return 0;
}

