//指针
#include <iostream> 
using namespace std;

int main()
{
	int a=3;
	int *p;
	int **pp;
	p=&a;
	pp=&p;
	cout<<"a:"<<a<<" p:"<<p<<" *p:"<<*p<<" pp:"<<pp<<" *pp:"<<*pp<<" **pp:"<<**pp<<endl;
	cout<<*(p+1);//越界输出 
	return 0;
}
