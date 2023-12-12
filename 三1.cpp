#include<iostream>
using namespace std;
int measure(int x, int y)//定义函数
{
	int& z = y;
	while (x % y != 0)   //当余数不为0，则继续相除
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}
int main()
{
	int m, n;
	cout << "请输入两个数字：" << endl;
	cin >> m >> n;
	cout <<"最大公约数为："<< measure(m, n) << endl;
	return 0;
}