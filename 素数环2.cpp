#include<iostream>
using namespace std;

const int maxn=20;
int a[maxn+1]={0},total=0;
bool b[maxn+1]={0};
bool pr[2*maxn+1]={0,1};
bool isPrime(int n)
{
	for(int i=2;i*i<=n;++i)
		if(n%i==0) return false;
	return true;	
}
void init()
{
	for(int i=2;i<=2*maxn;++i)
		pr[i]=isPrime(i);
}
bool pd(int x,int y)
{
	return pr[x+y];
}
void  print(int n)
{
	
	for(int i=1;i<=n;++i)
		cout<<a[i]<<" ";
	cout<<endl;
	total++;	
}

void search(int t,int n=20)
{
	int i;
	for(i=1;i<=n;++i)
		if(pd(a[t-1],i) && (!b[i]))
		{
			a[t]=i;
			b[i]=1;
			if(t==n) {if (pd(a[t],a[1])) print(n);}
			else search(t+1,n);
			b[i]=0;
		}
}

int main()
{
	int n;
	cin>>n;
	init();
	a[1]=1;
	b[1]=1;
	search(2,n);
	//cout<<total<<endl;
     return 0;
}

