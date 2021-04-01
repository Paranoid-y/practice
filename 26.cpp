#include <iostream>
#include <array>
using namespace std;
int main()
{
    int  flag=true;
    int i = 0;
    int sum=0;
    while (flag)
    {
        cout << "输入一个数字：" << endl;
        i+=1;
        int num;
        cin >> num;
        if (num == 0)
        {
            return 0;
            flag =false;
        }
        else
        {
            sum=sum+num;
            cout << "前" << i<< "项和为：\n"
                       << sum << endl;
        }
    }
}