#include<iostream>
//#include<cstring>
using namespace std;

int main()
{
   char name[200];
   //cin.get(name,200);

   //string name;
   //gets(name);
   //cin>>name;//ֻȡ��һ������ 
   //getline(cin,name);//��������string���� 
   //cin.getline(name,200);//��������string���� 
   cin.get(name,200,'\n');
   cout<<name<<",welcome!";
   return 0;
	
}
