//�ַ��������� 
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char st[100];
	gets(st);//����һ���ִ��������ո� 
	
	for ( int i=0; i<strlen(st); ++i)//strlen()����Ҫ�õ�cstring�� 
	    cout<<st[i];
	return 0;
 } 
