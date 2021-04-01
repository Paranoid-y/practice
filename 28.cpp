#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char *  month[12] = {"1", "2", "3", "4", "5","6" ,"7", "8", "9", "10", "11", "12"};
    int len = sizeof(month) / sizeof(month[0]);
    cout<<len<<endl;
    int book[12];
    int sum=0;
    for (int i=0;i<len;i++)
    {
        cout<<"输入"<<month[i]<<"月的图书销售数量："<<endl;
        int num;
        cin>>num;
        book[i]=num;
        sum+=num;
    }
    cout<<"全年销售额为："<<sum<<"本"<<endl;
}