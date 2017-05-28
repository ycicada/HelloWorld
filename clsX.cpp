#include<iostream>
using namespace std;
class X;
class X{
	public:
		int a;
		enum Bool {False,True,Ok};
}; 


void fun(X &x){
	x.a=X::Ok;//x.a=x.OK
}


int main()
{
	X cls_x;
	fun(cls_x);
	cout<<cls_x.a<<endl;
	

	return 0;
}


