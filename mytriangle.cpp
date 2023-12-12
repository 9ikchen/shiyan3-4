#include<iostream>
using namespace std;
double _area(double side1, double side2, double side3)  //定义函数:求三角形的面积
{
	double area, s;
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}

bool is_valid(double side1, double side2, double side3)   //定义函数：判断是否为三角形
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		double _area(double side1, double side2, double side3);
		return true;
	}
	else
	{
		cout << "无法构成三角形！" << endl;
		return false;
	}
}
