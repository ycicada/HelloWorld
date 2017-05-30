//输入一个字串，找出第一个只有单次出现的字母并输出，若不符合条件，输出NO
//第一种方法用了双重循环，第二种方法用了单循环实现。 
 
 
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
	cout<<once1(s)<<endl;//第一种方法 
    cout<<once2(s)<<endl;//第二种方法 
	return 0;
}
