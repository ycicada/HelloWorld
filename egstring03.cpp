//����һ���ִ����ҳ���һ��ֻ�е��γ��ֵ���ĸ������������������������NO
//��������˫��ѭ������ѭ�����ʵ�֣� 
 
#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[]) 
{
	string s;
	int c=0;
	cin>>s;
	for (int i=0;i<s.size();i++)
	{
		c=0;
	   for(int j=0;j<s.size();j++)
	   {
	   	if(s[i]==s[j]) c++;
	   }
	   if(c==1) 
	   {
	   cout<<s[i];	   
	   return 0;
	   }
    }    
    cout<<"NO";
	return 0;
}
