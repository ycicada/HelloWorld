//eg1.1_3.cpp
 //����ƽ������������꣬�������֮��������پ��롣
 //d=|x1-x2|+|y1-y2|
 #include <iostream>
 using namespace std;

//�������� 
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
