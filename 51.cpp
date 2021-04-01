#include<iostream>
using namespace std;

long double probability(unsigned numbers,unsigned picks)
{
    long double result=1.0;
    long double n;
    unsigned p;
    for (n=numbers,p=picks;p>0;n--,p--)
    {
        result=result*n/p;
    }
    return result;
}
int main()
{
    /*double total,choices;
    cout<<"输入：\n";
    while((cin>>total>>choices) && choices<=total)
    {
        cout<<"赢的可能性为：";
        cout<<probability(total,choices);
        cout<<"下一组数据：(q退出)\n";
    }
    cout<<"done"<<endl;*/
    double total1 = 47, choices1 = 5;
    double total2 = 27, choices2 = 1;
    cout << "赢的可能性为：";
    cout << probability(total1, choices1) * probability(total2, choices2);
    cout<<endl;
    return 0;
}