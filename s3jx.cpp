/*
1002. ������ (Standard IO)
�������������߳�a,b,c����֤�ܹ��������Σ�����������������
����
һ��������һ���ո������ʵ��a,b,c����ʾ�����ε������߳���

���
��������ε�������𰸱�����λС����

��������
3 4 5

�������
6.0000

���ݷ�Χ����
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
