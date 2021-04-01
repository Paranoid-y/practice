#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[]={4,5,6,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n",n);

    for (int i =1;i< n;i++)
    {
        int tmp=a[i];
        for (int j=i-1;j>=0;j--)
        {
            if (a[j]>tmp)
            {
                /* code */
                swap(a[j+1],a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    cout<<endl;
}