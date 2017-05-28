//exam3.15 p75
#include<iostream>
using namespace std;

int isleap(int year)
{
if (year%4!=0)
		return 0; 
else
	  if (year%100!=0 or year%400==0)
	    return 1;
	  else
	    return 0;	
}

int main()
{
	for ( int i=2000;i<2300;i++) 
      cout<<i<<"  "<<isleap(i)<<endl;
	return 0;
 } 
