//eg1.1_3.cpp
 //给出平面上两点的坐标，求出两点之间的曼哈顿距离。
 //d=|x1-x2|+|y1-y2|
 #include <iostream>
 using namespace std;

//建立函数 
 double abs(double x)
{
    return x>0?x:-x;
 } 
 
 int main()
 {
 	double x1,y1,x2,y2,dx,dy;
 	cin>>x1>>y1>>x2>>y2;
 	dx=abs(x1-x2);
 	dy=abs(y1-y2);
 	cout<<dx+dy<<endl;
 	return 0;
 	
  } 
