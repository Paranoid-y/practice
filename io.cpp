
#include <iostream>
using namespace std;
int readNumber()
{
    int x{};
    cout << "please enter an integer:";
    cin>>x;
    return x;
}
void writeAnswer(int x,int y)
{
    cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
