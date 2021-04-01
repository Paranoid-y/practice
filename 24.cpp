#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int  main()
{
   
    cout << "请按顺序输入两个正数,";
    int min_n;
    int max_n;
    cout << "请输入较小的那个数：\n";
    
    cin >> min_n;
    int summ = 0;
    cout << "请输入较大的那个数：\n";
    
    cin >> max_n;
    
    for (int i=min_n;i<=max_n;i++)
    {
        summ+=i;
    }
    cout <<  min_n <<"--"<<max_n <<"   sum is "<< summ <<endl;
}