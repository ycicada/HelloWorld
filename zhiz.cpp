#include <iostream>
#include <iomanip>  //fixed,setprecision()
//#include <cmath>
//#include <cstdio>
//#include <string>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*

*/
int main()
{
    int a=3,b=4;
	int *p = &a;
	cout<<"a="<<a<<endl<<"*p="<<*p<<endl<<"&p="<<&p<<endl<<"p="<<p<<endl<<"&a="<<&a<<endl;
	a=5;
	cout<<*p<<endl;
	*p=b;
	cout<<a<<endl<<*p<<endl;
	//cout<<fixed<<setprecision(2);
	return 0;
}

