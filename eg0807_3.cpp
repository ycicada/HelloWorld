#include <iostream>
//#include <cstdio> //scanf,printf
//#include <cstring>
//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;

/* 
����n,m,k�������n�У�m�У���k�����������������룬�����������
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
	//����n,m,k 
	cin>>n>>m>>k;
    
    //��̬�������� 
	int LP=k+1;
	int x,y[LP],d[LP];
	
	//��¼�������ݣ�xֵ����¼ 
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y[i]>>d[i];
	}
	
	//����������� 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++)
			if(y[j]==i) cout<<d[j]<<" ";
	return 0;
}

