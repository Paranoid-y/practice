#include<iostream>
using namespace std;
int main()
{
    int  a[]={1,2,3,4,5,6};
    int value=5;
    int low=0;
    int high=sizeof(a)/sizeof(int)-1;
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if (a[mid]==value)
        {
            cout<< mid << endl;
            break;
        }
        else if (a[mid]>value)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}