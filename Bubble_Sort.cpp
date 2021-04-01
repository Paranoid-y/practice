#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[]={4,5,6,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n",n);
    for (int i =0;i< n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                /* code */
                swap(a[j],a[j+1]);
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    cout<<endl;
}