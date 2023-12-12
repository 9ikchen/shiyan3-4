#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	bool l[size];
	for (int i = 1;i < size;i++)
	{
		l[i] = false;
	}
	for (int j = 0;j < size;j++)
	{
		for (int k = j;k < size;k += j + 1)
		{
			if (l[k])
				l[k] = false;
			else
				l[k] = true;
		}
	}
	for (int m = 0;m < size;m++)
	{
		if (l[m])
			cout << m + 1 << "  ";
	}
	cout << endl;

	return 0;
}
