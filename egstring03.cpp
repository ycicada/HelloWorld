//输入一个字串，找出第一个只有单次出现的字母并输出，若不符合条件，输出NO
//这里用了双重循环，单循环如何实现？ 
 
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
