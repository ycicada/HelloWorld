#include <iostream>
#include <iomanip>
//#include <cstdio>
//#include <string>
//#include <cmath>
//#include <fstream>

using namespace std;

//ifstream fin("a.in");
//ifstream fout("a.out");
int num=0,a[10001]={0},n,r;
bool b[10001]={0};
int search(int);
int print();

 
/*����˵��������n����������{1��2��3...n}����������ȡ��r�����������У�r<n��,���г����е�����*/
int main()
{
    ios_base::sync_with_stdio(false);//���scanf&printf
    cin.tie(0);//���cin&cout��
    //���������ʽ
	//cout<<fixed;//�������������
    //cout<<scientific;//��ѧ���㷨���
	//cout<<precision(5);//С���㱣��λ��
	
	cin>>n>>r;
	search(1);
	cout<<num<<endl;

	return 0;
}

int search(int k)
{
	for(int i=1;i<=n;i++)
	if(!b[i])
	{
		a[k]=i;
		b[i]=1;
		if(k==r) print();
		else search(k+1);
		b[i]=0;
	}
}

int print()
{
	num++;
	for(int j=1;j<=r;j++)
	cout<<setw(3)<<a[j];
	cout<<endl;
}
