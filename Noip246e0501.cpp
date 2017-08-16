#include <iostream>
#include <cmath> 
#include <cstdio>
using namespace std;
bool b[21]={0};
int a[21]={0},total=0;

int search(int);
void print();
bool pd(int x,int y);
/*ËØÊı»·--ËÑË÷Ëã·¨ 
*/
int main()
{
	search(1);
	cout<<total<<endl;
	return 0;
}

int search(int t)
{
	for (int i=1;i<=20;i++)
	{
		if(pd(a[t-1],i)&&(!b[i]))
		{
			a[t]=i;
			b[i]=1; 
			if(t==20){if(pd(a[20],a[1])) print();}
			   else search(t+1);
			b[i]=0;
		}

	 } 
	
}

void print()
{
	total++;
	//cout<<total<<":"; 
	printf("%d:",total);
	for(int j=1;j<=20;j++)
	 // cout<<a[j]<<" ";
	 	printf("%d ",a[j]);
	printf("\n");
	 //cout<<endl;
	 
}

bool pd(int x,int y)
{
	int k=2; int n = x + y;
	while(k<=sqrt(n)&&n%k!=0) k++;
	if(k>sqrt(n)) return 1;
	  else return 0;
}
