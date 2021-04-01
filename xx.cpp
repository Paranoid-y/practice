#include <iostream>
using namespace std;
int power(int x,int n);
int main(int argc,char *argv[])
{
    int x,n;
    cout << "please enter number:";
    cin>>x;
    cout << "please enter number:";
    cin>>n;
    cout<<x<<" "<< n <<"次幂："<<power(x,n)<<endl;
    return 0;
}
int power(int x,int n)
{  
    int val=1;
    while(n--)
    {
        val *=x;
    }
    return val;
}
