#include <iostream>
#include <cmath>
//#include <cstdio>
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;
/*
1007. �������� (Standard IO)
ʱ������: 1000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����

��������˫���ȸ�����a��b�����������a��b��������������������r���Ķ����ǣ�a = k * b + r������ k�������� 0 <= r < b��

����

һ�������ո��������a��b��

���

���a����b������(�𰸱�����λС��)��

��������

3 2

�������

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

