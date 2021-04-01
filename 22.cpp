#include <iostream>
#include <array>
using namespace std;
array<float ,3> merter;

int main()
{
    cout<<"please input three score:"<<endl;
    float sum=0;
    float aver;
    int n=3;
    for (int i=0;i<n;i++)
    {
        cin>>merter[i];
        sum=sum+merter[i];
    }
    aver=sum/3;
    cout<<"次数："<< n << "\n"
             <<"平均成绩："<<aver<<endl; 
}