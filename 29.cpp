#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char * month[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    char* years[3]={"第1年","第2年","第3年"};
    int len = sizeof(month) / sizeof(month[0]);
    cout << len << endl;
    int book[3][12];
    int sum = 0,sum1=0;
    for (int j = 0; j< 3; j++)
    {
        cout<<"第"<<years[j]<<"年的图书销售情况："<<endl;
        for (int i = 0; i < len; i++)
        {
            cout << "输入" << month[i] << "月的图书销售数量：" << endl;
            int num;
            cin >> num;
            book[j][i] = num;
            sum += num;
            sum1+=num;
        }
        cout << "第" << years[j] << "年的图书销售总额为："<<sum1 << endl;
        sum1=0;
    }
    cout << "三年的销售额为：" << sum << "本" << endl;
}