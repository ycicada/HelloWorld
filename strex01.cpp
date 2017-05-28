#include<iostream>
//#include<cstring>
using namespace std;

int main()
{
   char name[200];
   //cin.get(name,200);

   //string name;
   //gets(name);
   //cin>>name;//只取第一个单词 
   //getline(cin,name);//不适用于string定义 
   //cin.getline(name,200);//不适用于string定义 
   cin.get(name,200,'\n');
   cout<<name<<",welcome!";
   return 0;
	
}
