//����һ���ִ����ҳ���һ��ֻ�е��γ��ֵ���ĸ������������������������NO
//��һ�ַ�������˫��ѭ�����ڶ��ַ������˵�ѭ��ʵ�֡� 
 
 
#include <iostream>
#include <string>

using namespace std;

string once1(string s)
{
	int c;
	string s2="";
	for (int i=0;i<s.size();i++)
	{
		c=0;
	   for(int j=0;j<s.size();j++)
	   {
	   	if(s[i]==s[j]) c++;
	   }
	   if(c==1) 
	   {
	   //cout<<s[i];
	   s2+=s[i];
	   return s2;
	   }
    }    
    return "NO";	
}

string once2(string s)
{
	int c,a[26]={0};
	string s2="";
	for (int i=0;i<s.size();i++)
	{
		a[s[i]-'a']++;
    }    
    for (int j=0;j<26;j++)
      if(a[j]==1) 
      {
	   s2+=char(j+'a');
	   return s2;
	  }
        
	 return "NO";	
}


int main(int argc,char *argv[]) 
{
    string s;
	cin>>s;
	cout<<once1(s)<<endl;//��һ�ַ��� 
    cout<<once2(s)<<endl;//�ڶ��ַ��� 
	return 0;
}
