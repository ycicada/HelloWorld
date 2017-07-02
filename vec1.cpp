#include <iostream>
#include <vector> 

using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(100);
	cout<<"[";
	for (int i = 0; i<vec.size();i++){
		if(i>0) cout<<",";
		cout<<vec[i];
	}
	cout<<"]";
	return 0;
}
