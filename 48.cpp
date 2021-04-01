#include<iostream>
using namespace std;
double average(int a,int b)
{
    double ave=(double)(2.0*a*b)/(a+b);
    return ave;
}
int main()
{
    int x,y;
    cout << "输入x,y值：";
    while (cin >> x >> y  && x !=0 && y!=0 )
    {
        cout<<average(x,y)<<endl;
         cout << "下一组数据:";
    }
    cout << "Done" << endl;
    return 0;
}