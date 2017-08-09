#include <iostream>
#include <cstdio>



//#include <iomanip>
//#include <cmath>
//#include <string>
//#include <vector>
using namespace std;



int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	int *p=&a[0];//or int *p=a; or int *p; p=a;
	for (int i=0;i<n;i++)
	{
		cout<<*p<<endl;
		p++;
	 } 
	//cout<<fixed<<setprecision(2);
	return 0;
}
/*   
int a[101],n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int *p = &a[1];
	for(int i=1;i<=n;i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}
*/
