#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int list1[size] ;        //��������list1�������������
	cout << "Enter ten numbers:" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> list1[i];       //�Ӽ��̽�������
	}
	cout << "The distinct numbers are:";

	for (int a = 1;a < size;a++)
	{
		for (int b = 0;b < a;b++)
		{
			if (list1[a] !=  list1[b])   //ifѭ�����ж��Ƿ�����ͬԪ��
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