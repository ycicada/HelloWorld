#include <iostream>
#include <iomanip>
//#include <cstdio>
//#include <string>
//#include <cmath>
//#include <fstream>

using namespace std;

int a[10001]={1},n,total;
int search(int,int);
int print(int);
 
//ifstream fin("a.in");
//ifstream fout("a.out");

/*����˵����������Ȼ��n�����������Ȼ����*/
int main()
{
    ios_base::sync_with_stdio(false);//���scanf&printf
    cin.tie(0);//���cin&cout��
    //���������ʽ
	//cout<<fixed;//�������������
    //cout<<scientific;//��ѧ���㷨���
	//cout<<precision(5);//С���㱣��λ��
	cin>>n;
	search(n,1);
	cout<<"total="<<total<<endl;

	return 0;
}

int search(int s,int t=1)
{
	int i;
	for(i=a[t-1];i<=s;i++)
		if(i<n)
		{
			a[t]=i;
			s-=i;
			if(s==0) print(t);
				else search(s,t+1);
			s+=i;
		}
}

int print(int t)
{
	cout<<n<<"=";
	for(int j=1;j<=t-1;j++)
		cout<<a[j]<<"+";
	cout<<a[t];
	cout<<endl;
	total++; 
}
