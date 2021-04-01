#include<iostream>
#include<foo.h>
#include<goo.h>
//int dosomething(int x,int y);
int main()
{
    std::cout<<foo::dosomething(4,2)<<std::endl;
    std::cout<<goo::dosomething(4,2)<<std::endl;
    return 0;
}
