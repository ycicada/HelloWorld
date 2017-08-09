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


const int LP=100001;
int n,m,k;
int x[LP],y[LP],d[LP],c[LP],*a[LP];

int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>x[i]>>y[i]>>d[i];
		c[y[i]]++;
	}
	for(int i=1;i<=m;i++)
		a[i] = new int[c[i]];
		
	for(int i=1;i<=k;i++)
	{
		*a[y[i]] = d[i];
		a[y[i]]++;
	 } 
	for(int i=1;i<=m;i++)
	{
		a[i]-=c[i];
		for(int j=1;j<=c[i];j++,a[i]++)
			cout<<*a[i]<<" ";
	}	
		
	
	//cout<<fixed<<setprecision(2);
	return 0;
}
*/
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
    int LP=k+1;
	int x[LP],y[LP],d[LP],c[m+1],*a[m+1];
	for(int i=1;i<=k;i++)
	{
		cin>>x[i]>>y[i]>>d[i];
		c[y[i]]++;
	}
	for(int i=1;i<=m;i++)
		a[i] = new int[c[i]];
		
	for(int i=1;i<=k;i++)
	{
		*a[y[i]] = d[i];
		a[y[i]]++;
	 } 
	for(int i=1;i<=m;i++)
	{
		a[i]-=c[i];
		for(int j=1;j<=c[i];j++,a[i]++)
			cout<<*a[i]<<" ";
	}	
	return 0;
}

