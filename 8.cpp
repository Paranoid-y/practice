#include<iostream>
using namespace std;
int main()
{
    const double inch_per_foot=12;
    const double meter_per_inch=0.0254;
    const double pound_per_kilo=2.2;
    double foot,inch,pound;
    double meter,kilo;
    cout << "输入你的身高，依次为英尺英寸："<<endl ;
    cin>>foot>>inch;
    cout << "输入你的体重，单位是磅："<< endl;
    cin>>pound;
    meter=(foot*inch_per_foot+inch)*meter_per_inch;
    kilo=pound/pound_per_kilo;
    double BMI=kilo/(meter*meter);
    cout << "你的身高值为:" << meter << "米\n"
            <<"你的体重为："<<kilo<<"千克\n"
            <<"你的BMI值为："<< BMI<<endl;

  
}