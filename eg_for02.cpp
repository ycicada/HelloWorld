//输入一个数n,求和s=1+2+3+...+n 
//例如输入100，输出5050 
#include<iostream> 
using namespace std;

int main()
{
	int n,s;
	cin>>n;
	
	s=0;//先初始化s值为0 
	for (int i=1; i<=n; i++)
	  s+=i;//也可写成s=s+1效果相同
	//如果不用循环也可以s=n*(n+1)/2 
	  
	cout<<s; 
	return 0; 
 } 
