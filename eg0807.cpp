#include <iostream>
#include <cstdio> //scanf,printf
//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;

/* ����n,m,k�������n�У�m�У���k�����������������룬�����������
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
	int n,m,k;
	int x,y,data;
	cin>>n>>m>>k;
	int **a=new int *[m+1];
	//int *a[m+1];
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y>>data;
		a[y]=new int[1];
		*a[y]=data;
	 } 
	int *p;
	for(int i=1;i<=m;i++)
	{
       p=a[i];
		for(int j=0;j<sizeof(a[i]);j++)
			cout<<p[j]<<" ";
			
	}	
		
	
	//cout<<fixed<<setprecision(2);
	return 0;
}

