#include<iostream>                  //�ݹ飺��������
using namespace std;               //��һ���������=��ʣ�µ�+1��*2
int f(int n)              //���庯����num-��������n-����
{
    int num;
    if (n == 10)
    {
        num = 1;
            return num;
    }

    else
    {
        num = (f(n + 1) + 1) * 2;
            return num;
    }
}
int main()
{
    int num=1;
    cout << f(num) << endl;
    return 0;
}