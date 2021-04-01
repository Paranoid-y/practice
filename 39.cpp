#include<iostream>
using namespace  std;
int main()
{
    double cost;
    double salary;
    cout<<"请输入你的收入，以便计算所得税：";
    while(cin>>salary && (salary>0 ||  isdigit(salary)))
    {
        cout<<"所得税为：";
        if  (salary<=5000)
        {
            cost=0;
            cout<<cost<<endl;
        }
        else if (salary<=15000 && salary>5000)
        {
            cost=0+(salary-5000)*0.10;
            cout<<cost<<endl;
        }
        else if (salary <=35000 && salary >15000)
        {
            cost=0+10000*0.10+(salary-15000)*0.15;
            cout<<cost<<endl;
        }
        else
        {
            cost=0+10000*0.10+20000*0.15+(salary-35000)*0.20;
            cout<<cost<<endl;
        }
        cout<<"请继续输入收入：";
    }
    cout<<"结束输入"<<endl;
}