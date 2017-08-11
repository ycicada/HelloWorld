#include <iostream>
#include <cmath>
#include <cstdio> 
#include <cstring>
using namespace std;

/*高精度除法-2；来自于信息学奥赛一本通C++P185ge0104
in:123412341234123412341234
4321

out:
2856106022543934...2420
*/
int main()
{
	char a1[100];
	int a[100],b,c[100],lena,lenb,lenc,i,x,m,l;
	memset(a,0,sizeof(a));
	memset(c,0,sizeof(c));

	gets(a1);
    cin>>b;

	lena = strlen(a1);
	m=lena%4;
	l = (m==0)?(lena/4):((lena/4)+1);

	for(i=0;i<=l-1;i++){
		for(int j=3;j>=0;j--)
		{
			if((i*4-j+m-1)<0)
			   continue;
			a[i+1] += (a1[(i*4-j+m-1)]-'0') * pow(10,j);
		}
	 // cout<<a[i+1]<<" ";	
	}

	//按段相除 
	x = 0;
	for(i=1;i<=l;i++)
	{
		c[i] = (x*10000 +a[i]) / b;
		 x   = (x*10000 +a[i]) % b;
	}
	
	lenc=1;
	while(c[lenc]==0 && lenc<l) 
		lenc++;
		
	for(int i=lenc;i<=l;i++) cout<<c[i];
	cout<<"..."<<x<<endl; 
	return 0;
}

