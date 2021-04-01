#include<iostream>
using namespace std;
int main()
{
    float  oil_per_100kilo;
    float mile_per_gallon;
    float  mile_per_100kilo=62.14;
    float liter_per_gallon=3.875;
    cout<<"请输入汽车耗油量（每100公里消耗的汽油量（升））：";
    cin >> oil_per_100kilo;
    float mile = mile_per_100kilo;
    float  gallon=oil_per_100kilo/liter_per_gallon;
    mile_per_gallon=mile/gallon;
    cout<< "美国风格的耗油量为（每加仑的英里数）：" << mile_per_gallon << endl;
}