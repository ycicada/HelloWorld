#include <iostream>
using namespace std;

/*µÝÍÆ·¨£¨ÄæÍÆ£© 
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5

30
*/

int main()
{
	int n,i,j,a[101][101],t;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
		cin>>a[i][j];
	for(i=n-1;i>=1;i--)
		for(j=1;j<=i;j++)
		{
			cout<<a[i][j]<<":";
			if(a[i+1][j]>=a[i+1][j+1]) t=a[i+1][j];
			else t=a[i+1][j+1];
			a[i][j]+=t;
			//cout<<t<<" ";
		 } 
	
	cout<<"\n"<<a[1][1]<<endl;
/* 
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		cout<<a[i][j]<<" ";
	 cout<<"\n";
   }
*/ 
	return 0;
}

