#include <iostream>
#include <cmath> 
#include <cstdio>
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

//oj.noi.cn 1005
//��������R%���뱾ǮX������P���ı����ϼ�ΪY=X*((100+R)/100)^P����Y��ֵ��
//����һ�������ո������ʵ��R,X,P
//�������Y���𰸱�����λС����
int main()
{
	float r,x,p,y;
	cin>>r>>x>>p;
	y=x*pow((1+r/100),p);
	printf("%0.2f",y);

	return 0;
}

