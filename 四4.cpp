#include<iostream>
using namespace std;
void swap(int& a, int& b)  //定义交换函数
{
	int t;
	t = a;
	a = b;
	b = t;
}

void bubbleSort(const int list[10])  //定义起泡函数
{
	const int size = 10;  //变量size
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);   //调用swap函数
				changed = true;
			}
	} while (changed);
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])  //定义合并函数
{
	for (int n = 0;n < size1;n++)
	{
		list3[n] = list1[n];
	}
	for (int m = 0;m < size2;m++)
	{
		list3[size1+m] = list1[m];
	}
	cout << "The merged list is : ";
	bubbleSort(list3);                    //调用起泡函数
	cout << list3 << endl;
}

int main()
{
	int size1, size2, size3;
	cout << "please enter the size1:";         //输入数组1
	cin >> size1;
	cout << "please enter the list1:" ;
	int *list1=new int[size1];
	for (int x = 0;x< size1;x++)
	{
		cin >> list1[x];
	}
	cout << "please enter the size2:" ;         //输入数组2
	cin >> size2;
	int *list2=new int[size2];
	cout << "please enter the list2:" ;
	for (int y = 0;y< size2;y++)
	{
		cin >> list2[y];
	}
	size3 = size1 + size2;                      //定义数组3
	int *list3=new int[size3];
	merge(list1, size1, list2, size2, list3);  //调用合并数组函数
	cout << endl;
	return 0;
}