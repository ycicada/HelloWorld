#include <iostream>
#include <cstdio> 
using namespace std;

/*
ȫ���У���1-n������ȡ��r������ȫ���� 
*/
int n,r,a[1001],total=0;
bool b[1001]={false};
void print(){
	for(int i=1;i<=r;++i)
	    cout<<a[i]<<" ";
	cout<<"\n";
	total++;
} 
void search(int k){
	for(int i=1;i<=n;++i)
	if(!b[i]){//�������� 
	//if(!b[i] && i>a[k-1]){ //��ϣ��Ȳ���˳�� 
		a[k]=i;
		b[i]=true;
		if(k==r) print();
		   else  search(k+1);
		b[i]=false;
	}
}

int main()
{
	cin >>n>>r;
	search(1);
	cout<<total;
	return 0;
}

