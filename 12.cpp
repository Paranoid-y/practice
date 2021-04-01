#include<iostream>
using namespace std;
int main()
{
    double  distance,oil;
    double  distance_per_jia;
    double distance_per_kilo;
    int type;
    cout<<"请选择输入类型：1为美国，2为欧洲：";
    cin>>type;
    switch(type)
    {
        case 1:
                     cout<<"输入里程数（英里）和使用汽油量（加仑）:";
                     cin>>distance>>oil;
                     distance_per_jia=distance/oil;
                     cout << "耗油量为：一加仑的里程数" << distance_per_jia << endl;
                     break;
        case 2:
                      cout << "输入里程数（公里）和使用汽油量（升）:";
                     cin >> distance >> oil;
                     distance_per_kilo = oil/distance;
                     cout << "耗油量为：每100公里的耗油量"<< 100*distance_per_kilo << endl;
                      break;
        default:
                     break;
    }
}