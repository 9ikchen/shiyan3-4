#include<iostream>
using namespace std;
bool is_prime(int num)  //�����ж������ĺ���
{
  bool is_prime = true;    //������true
  for (int i = 2;i < num;i++)  //����������false

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
    int n=0;      //ÿ���������������
    for (int i = 2;;i++)
    {
        if (is_prime(i))
        {
            cout << i <<"  ";    //������һֱ�����������������
            n++;
            if (n%10==0)     //��nΪ10�ı�������һ�����
            {
                cout << endl;      //��10�����ָ����������
                
                if (n == 200)
                {
                   
                    break;
                }
               
 

            }

        }
    }
   
    return 0;
}