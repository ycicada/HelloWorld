#include <iostream>
//#include <cstdio>
#include <cstring>      //std::memset 
#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

/*�ŶӴ�ˮ���⣬n�˷�r�Ӵ�ˮ�����ٴ�ˮʱ��
4 2
2 6 4 5
//23 
*/
int main()
{
	int j=0,minx=0,n,r;
	cin>>n>>r;
	int a[n],s[r]={0} ;
//	memset(s,0,sizeof(s));
//    for(int i=0;i<r;i++)
//     s[i]=0;
	for(int i=0;i<n;i++)
	   cin>>a[i];
//���� 
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(j==r) j=0;
		s[j]+=a[i];
		minx+=s[j];
		j++;
		
		
	}
	   cout<<minx;

	return 0;
}

