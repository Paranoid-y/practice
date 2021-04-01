#include <iostream>
int getValueFromUser()
{
    std::cout << "enter an integer:";
    int input{};
    std::cin>>input;
    return input;
}

void printDouble(int value)
{
    std::cout<<value<<" double is : "<<value*2<<std::endl;
}
int main()
{
   // int num{getValueFromUser()};
    printDouble(getValueFromUser());
    //std::cout << num << " double is :"<<num*2<< std::endl;
    return 0;
}
