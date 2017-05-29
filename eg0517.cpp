//字符串的例子 
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char st[100];
	gets(st);//读入一行字串，包括空格 
	
	for ( int i=0; i<strlen(st); ++i)//strlen()函数要用到cstring库 
	    cout<<st[i];
	return 0;
 } 
