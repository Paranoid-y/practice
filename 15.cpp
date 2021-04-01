#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    string dessert;

    cout <<"输入你的名字：\n";
    getline(cin,name);
    cout<<"输入你最喜欢的甜点:\n";
    getline(cin,dessert);
    cout<<"我有一些甜点："<<dessert<<"专门为你准备："<<name<<"\n";
}