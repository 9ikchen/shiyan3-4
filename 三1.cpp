#include<iostream>
using namespace std;
int measure(int x, int y)//���庯��
{
	int& z = y;
	while (x % y != 0)   //��������Ϊ0����������
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
	cout << "�������������֣�" << endl;
	cin >> m >> n;
	cout <<"���Լ��Ϊ��"<< measure(m, n) << endl;
	return 0;
}