//eg1.1_1.cpp
 //����ƽ������������꣬�������֮��������پ��롣
 //d=|x1-x2|+|y1-y2|
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	double x1,y1,x2,y2,dx,dy;
 	cin>>x1>>y1>>x2>>y2;
 	
	//if(x1>x2) 
	//    dx=x1-x2;
 	//else
	//    dx=x2-x1;
	dx=(x1>x2)?x1-x2:x2-x1;
 	//if(y1>x2)
 	//    dy=y1-y2;
 	//else
 	//    dy=y2-y1;
 	dy=(y1>y2)?y1-y2:y2-y1;
 	cout<<dx+dy<<endl;
 	return 0;
 	
  } 
