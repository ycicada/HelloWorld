#include <iostream>
//#include <cstdio> //scanf,printf
//#include <cstring>
//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;

/* 
输入n,m,k，即最大n行，m列，共k个数，按行优先输入，按列优先输出
4 6 10
1 2 12
1 4 23
2 2 56
2 5 78
3 2 100
3 4 56
4 1 73
4 2 65
4 3 34
4 5 55

73 12 56 100 65 34 23 56 78 55 
*/
int main()
{
	int n,m,k;
	//输入n,m,k 
	cin>>n>>m>>k;
    
    //动态定义数组 
	int LP=k+1;
	int x,y[LP],d[LP];
	
	//记录后两数据，x值不记录 
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y[i]>>d[i];
	}
	
	//遍历输出数据 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++)
			if(y[j]==i) cout<<d[j]<<" ";
	return 0;
}

