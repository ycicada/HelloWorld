//梯形上底15，下底25，阴影面积150，求梯形面积
#include<iostream>
using namespace std;
int main()
{

  float s = 150.0, a = 15.0, b = 25.0, h ,area ;
  //float h;
  h= 2 * s / a;
  //cout<<a<<endl;
  
  //float area;
  area = (a+b) * h / 2;   
  cout<<area<<endl;
  
  return 0;  	
} 
