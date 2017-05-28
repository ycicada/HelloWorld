#include<iostream>
using namespace std;
//8000秒=  时  分  秒 
int main()
{
cout<<"8000秒="; 
cout<<8000/3600<<"时";
cout<<8000%3600/60<<"分";
cout<<8000%3600%60<<"秒"; 

return 0;	
}
