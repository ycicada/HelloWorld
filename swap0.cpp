//����a,b��ֵ�����ú���ʵ�֣�
//����a,b��ֵ������b,a
//����3 4�����4 3 

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

	int a,b;
	cin>>a>>b;
	//��ʾԭ����a,bֵ����ַ	
	cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;
	//����
	int t;//t��Ϊ�м����
	t = a;
	a = b;
	b = t;
	
	//���������Ľ������ʵ��ַ���䣬ֻ��ֵ���� 
	cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;
	
	return 0;
}

