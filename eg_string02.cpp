//程序还有问题，不能回车结束退出，必须回车+ctrl-z+回车才能退出 

#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[])
{
	string str,temp;
	cin>>str;
	while(cin >> temp)
		str+=' '+temp;
	
	cout<<str; 
	return 0;
 } 
 
