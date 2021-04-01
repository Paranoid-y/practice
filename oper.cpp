#include <iostream>
using namespace std;
bool isEven(int x);
int main()
{
    cout<<"enter an integer:";
    int x{};
    cin>>x;
    if(isEven(x))
        cout<<x<<" is odd\n";
    else
        cout<<x<<" is even\n";
    //cout<<"12/"<<x<<"="<<12/x<<endl;
    //cout<<" 6 + 5 * 4 % 3="<< 6 + 5 * 4 % 3<<endl;
    return 0;
}
bool isEven(int x)
{
    return x%2;
} 
