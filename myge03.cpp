//输入一个整数，如果是奇数，输出odd奇数，否则输出even偶数 
#include<iostream> 
using namespace std;
int main()
{
	long long num;
	cout<<"Please input an integer：" ;
	cin>>num;//输入一个数，并存在num里 
	if (num%2==1)
	   cout<<"odd"<<endl;
	else//否则 
	   cout<<"even"<<endl; 
	return 0;
 } 
