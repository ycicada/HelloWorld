#include <iostream>
using namespace std;

int main()
{
    long n=1; //��n���ֵ���ȳ�ʼ��Ϊ0,�൱�ڵ�1�� 
	for ( int i=1;i<=50;i++) 
	{
		n = n + i-1;
		cout<<i<<":"<<n<<endl;
	}
	return 0;
}

