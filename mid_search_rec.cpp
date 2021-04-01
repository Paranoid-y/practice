#include <iostream>
using namespace std;
int rec_search(int a[],int start,int end,int value)
{
    int  v=value;
    int mid=(start+end)/2;
    if ( a[mid]==v)
    {
        return mid;
    }
    else if (a[mid]>v)
    {
        return rec_search(a,start,mid-1,v);
    }
    else
    {
        return rec_search(a,mid+1,end,v);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int value = 5;
    int low = 0;
    int high = sizeof(a) / sizeof(int) - 1;
    cout << rec_search(a,low,high,value) << endl;

}