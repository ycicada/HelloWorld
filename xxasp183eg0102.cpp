#include <iostream>
#include <cstdio> 
#include <cstring>
using namespace std;

//*高精度减法；来自于信息学奥赛一本通C++P183ge0102*//
int main()
{
	const int MAX=256; 
	//char a1[MAX],b1[MAX],TEMP[MAX];
	string a1,b1,TEMP;
	int a[MAX]={0},b[MAX]={0},c[MAX]={0},lena,lenb,lenc,i;
	//memset(a,0,sizeof(a));
	//memset(b,0,sizeof(b));
	//memset(c,0,sizeof(c));

	//gets(a1);
	//gets(b1);
	getline(cin,a1);
	getline(cin,b1);
	
	lena=a1.length();
	lenb=b1.length();
	//if(strlen(a1)<strlen(b1) || (strlen(a1)==strlen(b1) &&strcmp(a1,b1)<0))
	//	{strcpy(TEMP,a1); strcpy(a1, b1); strcpy(b1,TEMP);cout<<'-';}
	if(lena<lenb ||(lena=lenb && a1<b1))
	{
		TEMP=a1;a1=b1;b1=TEMP;cout<<"-";
	}

	//lena = strlen(a1);
	//lenb = strlen(b1);
	lena=a1.length();
	lenb=b1.length();
	for(i=0;i<=lena-1;i++)  a[lena-i] = a1[i]-'0';
	for(i=0;i<=lenb-1;i++)  b[lenb-i] = b1[i]-'0';

	lenc = 1;
	while(lenc<=lena)
	{
		if(a[lenc]<b[lenc])
		{
			a[lenc]+=10;
			a[lenc+1]--;
		}
		c[lenc] = a[lenc]-b[lenc];
		lenc++;
	}
    while(c[lenc]==0 && lenc>1) lenc--;
    for(i=lenc;i>=1;i--) cout<<c[i];
	cout<<endl; 
	return 0;
}

