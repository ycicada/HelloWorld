#include <iostream>
//#include <cstdio> //scanf,printf
//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;
/*

*/

int main()
{
	std::ios_base::sync_with_stdio(false);//���cin/cout��scanf/printf�� 
    std::cin.tie(0);//���cout flush 
	string str1,str2;
	getline(cin,str1);
	int L=str1.length();
	str2=str1;
	for(int i=0;i<L;i++)
		str1[i]=str2[L-1-i];
	cout<<str1<<endl; 
	cout<<str2;
	return 0;
}

