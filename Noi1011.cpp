#include <iostream>
#include <iomanip>  //fixed,setprecision()
//#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*
1011. ������ (Standard IO)
ʱ������: 1000 ms  �ռ�����: 262144 KB  ��������  

��Ŀ����

��һ�������Σ��ĸ��ǵ�����ֱ��ǣ�1��-1������1��1������-1��-1������-1��1����дһ�������ж�һ�������ĵ㣨x,y���Ƿ�������������ڣ����������α߽磩��������������������Yes�������������No����

����

һ�������ո������ʵ��x,y����ʾ������ꡣ

���

�����(x,y)���������������Yes�������������No����

��������

0 0

�������

Yes

���ݷ�Χ����
*/
int main()
{
	float x,y;
	cin>>x>>y;
	if(x<=1 && x>=-1 && y<=1 && y>=-1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	//cout<<fixed<<setprecision(2);
	return 0;
}

