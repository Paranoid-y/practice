#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    for(int i = 0;i < 366;i++)
    {
        sum += i ;
    }
    cout << sum <<endl;
    cout << sum/(365/7) << endl;
    return 0;
}
