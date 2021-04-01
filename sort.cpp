#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>
#include <iterator>

int main()
{
    int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
    int len = sizeof(array)/sizeof(int);
    int i;
    std::cout<<"original is: ";
    for(int k{0}; k < len; k++)
    {
        std::cout<<array[k]<<" ";
    }
    std::cout<<"\n";

    //select_sort
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
    }

    for(i = 0;i<len-1; i++)
    {
        int maxindex{i};
        for(int j{i+1}; j<len; j++)
        {
            if(array[j]>array[maxindex])
                maxindex = j;
        }
        std::swap(array[i],array[maxindex]);
    }*/

    //bubble_sort
    
    for(i = 0; i < len -1; i++)
    {
        for(int j{0}; j<len-i-1;j++)
        {
            if(array[j] > array[j+1])
                std::swap(array[j],array[j+1]);
        }
    }
    

    std::cout<<"after sort is : ";
    for(int k{0}; k < len; k++)
    {
        std::cout<<array[k]<<" ";
    }

    std::cout<<"\n";
    return 0;
}
