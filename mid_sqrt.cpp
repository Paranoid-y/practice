#include<iostream>
using namespace std;
int main()
{
    int thresh=0.000001;
    double n=10;
    double low,high,mid;
    if (n<1)
    {
        low=n;
        high=1.0;
    }
    else
    {
        low=1.0;
        high=n;
    }
    while (high-low > 0.000001)
    {
        mid=low+(high-low)/2;
        double sqrt=mid*mid;
        if (sqrt - n > thresh)
        {
            high = mid;
        }
        else 
        {
            low=mid;
        }
    }
    cout << mid << endl;
}