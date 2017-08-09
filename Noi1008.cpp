#include <iostream>
#include <cstdio>
#include <cmath> 
//#include <cstring>      //memset(s,0,sizeof(s))
//#include <algorithm>    // std::sort
//#include <vector>       // std::vector
using namespace std;

int main()
{
int a,b,c;
scanf("%1d%1d%1d",&a,&b,&c);
if (pow(a,3)+pow(b,3)+pow(c,3)==(100*a+10*b+c))
     printf("YES");
else
     printf("NO");
	return 0;
}


