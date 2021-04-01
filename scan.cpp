#include <stdio.h>
#include<iostream>
int main()
{
    int num;
    scanf("%d",&num);
    int a[4] = {0};
    int j = 0;
    for ( int i = 0; i < num; i++)
    {
        do
        {
            scanf("%d",&a[j++]);
        } while (getchar() != '\n');
        std::cout<<a[0]<<std::endl;
        std::cout << a[1] << std::endl;
        a[4]={0};
        j = 0;
    }
}