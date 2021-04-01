#include<iostream>
using namespace std;
int trans(int h,int m)
{
    cout << "time:" << h <<":" << m << endl;
}
int main()
{
    cout << "please input the num of hours:"<< endl;
    int hours;
    cin >> hours;
    cout << "please input the num of minutes:"<< endl;
    int minutes;
    cin >> minutes;
    trans(hours,minutes);
}