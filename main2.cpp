#include <iostream>
//#include "io.h"
#include <plog/Log.h>
using namespace std;
int readNumber();
void writeAnswer(int x,int y);
int main()
{
    plog::Init(plog::debug,"Logfile.txt");
    LOGD<<"main() called";
    int x{readNumber()};
    int y{readNumber()};
   
    writeAnswer(x,y);
   
    return 0;
}
int readNumber()
{
    LOGD<<"readNumber() called";
    int x{};
    cout << "please enter an integer:";
    cin>>x;
    return x;
}
void writeAnswer(int x,int y)
{
    LOGD<< "writeAnswer() called";
    cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
