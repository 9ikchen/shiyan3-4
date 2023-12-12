#include<iostream>
using namespace std;

    void ys(int& x, int& y);  //函数的声明

    void bs(int& x, int& y);

 
    int main() //在主函数中输入输出
    {
        int m, n;

        cin >> m >> n;

        ys(m, n);

        bs(m, n);

        return 0;

    }

    void ys(int& x, int& y)   //最大公约数

    {

        int Y;

        for (int i = 1;i <= x && i <= y;i++)

        {

            if (x % i == 0 && y % i == 0)

            {
                Y = i;
            }
        }

        cout << "最大公约数为" << Y << endl;
    }

    void bs(int& x, int& y)  //最小公倍数

    {

        int B;

        for (int i = 1;;i++)

        {

            if (i % x == 0 && i % y == 0)
            {
                B = i; break;
            }

        }
        cout << "最小公倍数为" << B << endl;
    }
    