#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int list1[size] ;        //定义数组list1，存放输入数字
	cout << "Enter ten numbers:" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> list1[i];       //从键盘接收数字
	}
	cout << "The distinct numbers are:";

	for (int a = 1;a < size;a++)
	{
		for (int b = 0;b < a;b++)
		{
			if (list1[a] !=  list1[b])   //if循环，判断是否有相同元素
			{
				if (b == a - 1)
				{
					cout << list1[a] << "  ";
				}
				else
				{
					continue;
				}

			}
			else
			{
				break;
			}
			
			
		}
	}
	cout<<endl;
		return 0;
}