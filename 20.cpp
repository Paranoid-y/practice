#include <iostream>
#include <cstring>
#include<string>
using namespace std;
struct Pizza
{
    string name;
    float dia;
    int  weight;
};

int main()
{
    Pizza *pi=new Pizza;

    cout << "输入披萨直径：";
    cin >> pi->dia;

    cout<< "输入披萨店名称：";
    cin>>pi->name;
 
    cout << "输入披萨的重量：";
    cin>>pi->weight;

    cout<<"name: "<<pi->name<<"\n"
              <<"dia: "<<pi->dia<<"\n"
              <<"weight: "<<pi->weight<<endl;
    delete(pi);
}
