#include <iostream>
#include <cstdio> //scanf,printf
//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;

/* 输入n,m,k，即最大n行，m列，共k个数，按行优先输入，按列优先输出
4 5 9
1 2 12
1 4 23
2 2 56
2 5 78
3 2 100
3 4 56
4 1 73
4 3 34
4 5 55

73 12 56 100 34 23 56 78 55 

*/
int main()
{
	int n,m,k,temp;
	int x,y,data;
	cin>>n>>m>>k;
	int a[m+1][k+1]={0};

	for(int i=1;i<=k;i++)
	{
		cin>>x>>y>>data;
		temp = a[y][0]+1;
		a[y][temp]=data;
		a[y][0]++;
	 } 
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=(a[i])[0];j++)
			cout<<a[i][j]<<" ";
	}	
	return 0;
}

