#include <iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int x{5};
    int y{7};
    cout<<"x: "<<x<<", y: "<<y<<endl;
    swap(x,y);
    cout<<"----after swap----\n";
    cout<<"x: "<<x<<", y: "<<y<<endl;
    return 0;
}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
