#include <iostream>
#include <cstdio> 
using namespace std;

/*
全排列，从1-n个数中取出r个数的全排列 
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
	if(!b[i]){//有序排列 
	//if(!b[i] && i>a[k-1]){ //组合，既不看顺序 
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

