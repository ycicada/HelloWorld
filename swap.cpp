#include<iostream>
#include<cstdlib>
using namespace std;


void swap(int &m,int &n);

int main()
{
int a=3;
int b=4;

cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;
	
swap(a,b);

cout<<"a="<<&a<<" "<<a<<"  b="<<&b<<" "<<b<<endl;

system("Pause");
return 0;
}

void swap(int &m ,int &n)
{
   int temp = m;
   m  =  n;
   n  =  temp;
   cout<<"m:"<<&m<<" n="<<&n<<" temp:"<<&temp<<endl;
}
