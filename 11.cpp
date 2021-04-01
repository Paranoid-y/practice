#include<iostream>
using namespace std;
int main()
{
    long long population_world,population_us;
    cout << "输入世界人口：" ;
    cin>>population_world;
    cout<< "输入美国人口：";
    cin>>population_us;
    double  rate;
    rate=100*(double(population_us)/double(population_world));
    cout << "美国人口占世界人口的" << rate  <<"%"<<endl;
}