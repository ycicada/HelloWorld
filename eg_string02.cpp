//���������⣬���ܻس������˳�������س�+ctrl-z+�س������˳� 

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
 
