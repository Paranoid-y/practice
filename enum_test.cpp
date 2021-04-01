#include <iostream>
using namespace std;
enum weekday{s,m,t,w,thu,f,s1};
int main()
{
    enum weekday wky=s;
    for(int i=wky;i!=f;i++)
    {
        cout<<i<<endl;
        cout<<wky+s<<endl;
    }
    return 0;
}
