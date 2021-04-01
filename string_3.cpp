#include <iostream>
#include <string>
int main()
{
    std::string str{"I saw a red car yesterday"};

    //str.erase(4,11);

    str.replace(8,3,"blue");
    std::cout<<str<<std::endl;

    return 0;
}
