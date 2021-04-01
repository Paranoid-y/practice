#ifndef READ_H
#define READ_H

int readNumber()
{
    int x{};
    std::cout << "please enter an integer:";
    std::cin>>x;
    return x;
}
void writeAnswer(int x,int y)
{
    std::cout<<x<<"+"<<y<<"="<<x+y<<std::endl;
}
#endif
