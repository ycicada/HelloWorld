#include<iostream>
using namespace std;

const int maxN(10001);
int N,M,K;
int x[maxN],y[maxN],d[maxN];
int c[maxN];
int *a[maxN];

int main()
{
	cin >> N >> M >> K;
	for(int i=0;i<K;i++)
	{
		cin >> x[i] >> y[i] >> d[i];
		c[y[i]]++;
	}
	
	for(int i=1;i<=M ;i++)
	  a[i]=new int[c[i]];
	
	for ( int i=0;i<K; i++)
	{
		*a[y[i]]=d[i];
		a[y[i]]++;
	}
	
	for (int i=1;i<=M ;i++)
	{
		a[i]=a[i]-c[i];
		for (int j =0; j<c[i];j++,a[i]++)
		  cout << *a[i] <<' ';
	}
	return 0;
}
