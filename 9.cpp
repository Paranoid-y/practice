#include<iostream>
using namespace std;
int main()
{
    double degree,minutes,seconds;
    cout << "输入纬度,依次是度，分，秒："<<endl ;
    cout<<"首先，输入度：";
    cin>>degree;
    cout<<"接下来输入分：";
    cin>>minutes;
    cout<<"最后输入秒：";
    cin>>seconds;
    double total;
    total=degree+(minutes/60)+(seconds/3600);
    cout<<degree<<"度，"<<minutes<<"秒，"<<seconds<<"分="<<total<<" 度"<<endl;
}