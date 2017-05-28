/*
将输入的华氏温度转换为摄氏温度。由华氏温度F与摄氏温度C的转换公式为：F＝C×9/5＋32。
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float c,f;
	cin>>f;
	c=(f-32)*5/9;
	cout<<fixed<<setprecision(4)<<c<<endl;
	return 0;
}
