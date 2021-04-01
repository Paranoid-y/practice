#include<iostream>
using namespace std;
int main()
{
    const int inch_per_foot=12;
    int height;
    cout << "输入你的身高，单位是英尺：___" <<"\b\b\b";
    cin >> height;
    cout << "你的身高是："<< height << "英尺" << endl;
    cout  << "合计" << height/inch_per_foot <<"英尺" << height%inch_per_foot << "英寸"<<endl;
}