#include<iostream>
using namespace std;
double _area(double side1, double side2, double side3)  //���庯��:�������ε����
{
	double area, s;
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}

bool is_valid(double side1, double side2, double side3)   //���庯�����ж��Ƿ�Ϊ������
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		double _area(double side1, double side2, double side3);
		return true;
	}
	else
	{
		cout << "�޷����������Σ�" << endl;
		return false;
	}
}
