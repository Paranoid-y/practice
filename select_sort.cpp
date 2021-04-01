#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>
#include <iterator>

int main()
{
    int array[]{30,50,20,10,40};
    int len = sizeof(array)/sizeof(int);
    int i;
    std::cout<<"original is: ";
    for(int k{0}; k < len; k++)
    {
        std::cout<<array[k]<<" ";
    }
    std::cout<<"\n";
   /* for(i =0; i < len - 1; i++)
    {
        int minindex{i};
        for(int j{i+1};j < len;j++)
        {
            if( array[j] < array[minindex])
            {
                minindex = j;
            }
        }
        std::swap(array[i],array[minindex]);
    }*/

    for(i = 0;i<len-1; i++)
    {
        int maxindex{i};
        for(int j{i+1}; j<len; j++)
        {
            if(array[j]>array[maxindex])
                maxindex = j;
        }
        std::swap(array[i],array[maxindex]);
    }

    std::cout<<"after sort is : ";
    for(int k{0}; k < len; k++)
    {
        std::cout<<array[k]<<" ";
    }

    std::cout<<"\n";
    return 0;
}
