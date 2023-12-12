#include<iostream>
using namespace std;

void swap(int& a, int& b)  //定义交换函数
{
	int t;
	t = a;
	a = b;
	b = t;
}
void bubbleSort(double list[10])  //定义起泡函数
{
    double t;       //临时变量t
	const int size = 10;  //变量size
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j] ,list[j + 1]);   //调用swap函数
				changed = true;
			}
	} while (changed);
}
int main()
{
	const int size = 10;  //变量size
	double list[size];
	cout << "Please enter ten numbers:" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> list[i];
     }
	bubbleSort(list);   //调用函数
	for (int x = 0;x < size;x++)
	{
		cout << list[x] << "  ";
	}
	cout << endl;
	return 0;
}