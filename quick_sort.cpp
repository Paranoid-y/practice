#include<iostream>
void quick_sort(int arr[],int start,int end)
{
    if (start<end)
    {
        int s=start;
        int e=end;
        int flag=arr[s];
        while (s<e)
        {
            while (s<e && arr[e]>=flag)
            {
                e--;
            }
            if (s<e)
            {
                arr[s++]=arr[e];
            }
            while (s<e && arr[s]<flag)
            {
                s++;
            }
            if (s<e)
            {
                arr[e--]=arr[s];
            }
        }
        arr[s]=flag;
        quick_sort(arr,start,s-1);
        quick_sort(arr,s+1,end);
    } 
}
int main()
{
    int a[]={4,5,6,3,2,1};
    int len=sizeof(a)/sizeof(int);
    std::cout << len << std::endl;
    quick_sort(a,0,len-1);
    for (  int i = 0; i < len; i++)
    {
        std::cout << a[i] <<" ";
    }
    std::cout << std::endl;
}