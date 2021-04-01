#include<iostream>
using namespace std;
int main()
{
    long seconds, days,hours,minutes,se;
    cout << "输入一个秒数：" ;
    cin>>seconds;
    days = seconds/86400;
    hours=(seconds%86400)/3600;
    minutes=(seconds%3600)/60;
    se=seconds%60;
    cout << seconds <<"秒="<<days<<"天"<<hours<<"小时"<<minutes<<"分"<<se<<"秒"<<endl;
}