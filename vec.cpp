#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout<<vec.size()<<endl;
	for(int i=0;i<5;i++)
	   vec.push_back(i*i);
	cout<<vec.size()<<endl;
	for(int i=0;i<vec.size();i++)
	  cout<<i<<" "<<vec[i]<<endl;
	
	return 0;
}

