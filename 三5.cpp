#include<iostream>                  //递归：调用自身
using namespace std;               //上一天的桃子数=（剩下的+1）*2
int f(int n)              //定义函数。num-桃子数，n-天数
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