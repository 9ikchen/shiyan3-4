#include<iostream>
using namespace std;
bool is_prime(int num)  //定义判断素数的函数
{
  bool is_prime = true;    //都返回true
  for (int i = 2;i < num;i++)  //非素数返回false

        {
      if (num % i == 0)
      {
          is_prime = false;
          break;
      }
        }

        return is_prime;

   
}
int main()
{
    int n=0;      //每行输出的数字数量
    for (int i = 2;;i++)
    {
        if (is_prime(i))
        {
            cout << i <<"  ";    //不结束一直输出满足条件的数字
            n++;
            if (n%10==0)     //当n为10的倍数，即一行完成
            {
                cout << endl;      //满10个数字该行输出结束
                
                if (n == 200)
                {
                   
                    break;
                }
               
 

            }

        }
    }
   
    return 0;
}