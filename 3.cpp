#include<iostream>
using namespace std;
int trans(float num)
{
    float ff = num*1.8 + 32.0;
    return ff;
}
int main()
{
    cout << "please input celsius value:"<< endl;
    float cel;
    cin >> cel;
    cout << cel << "degree celsius is " << trans(cel) <<" degree Fahrenheit" << endl;
}
