#include <iostream>
#include <cstdio> 
#include <cstring>
using namespace std;

//*高精度除法；来自于信息学奥赛一本通C++P185ge0104*//
int main()
{
	char a1[100];
	int a[100],b,c[100],lena,lenb,lenc,i,x;
	memset(a,0,sizeof(a));
	memset(c,0,sizeof(c));

	gets(a1);
    cin>>b;

	lena = strlen(a1);
	for(int i=0;i<=lena-1;i++)  
	   a[i+1] = a1[i]-'0';
	
	//按位相除 
	lenc = 1,x = 0;
	for(i=1;i<=lena;i++) 
	{
		c[i]=(x*10+a[i])/b;
		x=(x*10+a[i])%b;
	}
	
	while(c[lenc]==0 && lenc<lena) 
		lenc++;
	for(i=lenc;i<=lena;i++) cout<<c[i];
	cout<<"..."<<x<<endl; 
	return 0;
}

