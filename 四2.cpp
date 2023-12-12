#include<iostream>
using namespace std;

void swap(int& a, int& b)  //���彻������
{
	int t;
	t = a;
	a = b;
	b = t;
}
void bubbleSort(double list[10])  //�������ݺ���
{
    double t;       //��ʱ����t
	const int size = 10;  //����size
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j] ,list[j + 1]);   //����swap����
				changed = true;
			}
	} while (changed);
}
int main()
{
	const int size = 10;  //����size
	double list[size];
	cout << "Please enter ten numbers:" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> list[i];
     }
	bubbleSort(list);   //���ú���
	for (int x = 0;x < size;x++)
	{
		cout << list[x] << "  ";
	}
	cout << endl;
	return 0;
}