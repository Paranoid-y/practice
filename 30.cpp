#include<iostream>
#include<string>
using namespace std;
struct car
{
    //char name[20];
    string name;
    int year;
};
int main()
{
    cout<<"请问有多少量汽车需要记录："<<endl;
    int num;
    cin>>num;
    car *c=new car[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"汽车 #"<<i +1<<": "<<endl;
        cout<<"请输入汽车制造商：";
        //cin.get();
        //cin.getline(c[i].name,20);
        cin.get();
        getline(cin,c[i].name);
        cout<<"请输入汽车的制造年份"<<endl;
        cin>>c[i].year;
    }
    cout<<"信息显示："<<endl;
    for (int j = 0; j < num; j++)
    {
        cout<<c[j].year <<" "<<c[j].name<<endl;
    }
    
    
}