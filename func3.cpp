#include <iostream>

int add(int x,int y)
{
    return x+y;
}

int multiply(int z,int w)
{
    return z*w;
}
int doubleNum(int x)
{
    return x*2;
}
int main()
{
    /*std::cout<<add(4,5)<<std::endl;
    std::cout<<add(1+2,3*4)<<std::endl;*/

    int a{};
    std::cin>>a;
    std::cout << doubleNum(a)<<std::endl;
    /*std::cout << add(a,a)<<std::endl;
    std::cout << add(1,multiply(2,3))<<std::endl;
    std::cout << add(a,add(2,3))<<std::endl;*/
    return 0;
}
