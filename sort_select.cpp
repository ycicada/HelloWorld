//—°‘Ò≈≈–Ú∑®
#include<iostream>
using namespace std;

int main()
{
	int n,k,temp;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int i=0;i<n;i++)
	{
		k=i; 
		for(int j=i+1;j<n;j++)
		    if (a[j]<a[i]) k=j;
		if(k!=i)
		{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
		}
	} 
	for(int i=0;i<n;i++)
	  cout<<a[i]<<" ";
	return 0;
 } 
