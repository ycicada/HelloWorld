//����һ����n,���s=1+2+3+...+n 
//��������100�����5050 
#include<iostream> 
using namespace std;

int main()
{
	int n,s;
	cin>>n;
	
	s=0;//�ȳ�ʼ��sֵΪ0 
	for (int i=1; i<=n; i++)
	  s+=i;//Ҳ��д��s=s+1Ч����ͬ
	//�������ѭ��Ҳ����s=n*(n+1)/2 
	  
	cout<<s; 
	return 0; 
 } 
