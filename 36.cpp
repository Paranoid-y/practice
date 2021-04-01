#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
#define num 10
int main()
{
   
    double  donation[num];
    double sum=0,average=0;
    int i=0,k=0;
    cout<<"输入数字："<<endl;
    while (cin >> donation[i] && i < 10 && !isdigit( donation[i]))
    {
        sum+=donation[i];
        i++;
    }
    average=sum/i;
    cout<<"和为："<< sum<<endl;
    cout<<"平均值为："<<average<<endl;
    for (int j=0;j<i;j++)
    {
        if (donation[j]>average)
        {
            k++;
        }
    }
    cout<<"有"<<k<<"个数大于平均值"<<endl;
}
