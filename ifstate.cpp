#include <iostream>
int main()
{
    std::cout<<"enter an integer:";
    int x{};
    std::cin>>x;
    if ( x==2 || x==3 || x==5 || x==7)
    {
        std::cout<<"The digit is prime\n";
    }else{

        std::cout<<"The digit is not prime\n";
    }
    int a{5};
    a = 6;
    std::cout << a<<std::endl;
    return 0;
}
