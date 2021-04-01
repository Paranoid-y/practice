#include<iostream>
#include <stdio.h>
#include<chrono>
#include <unistd.h>
#include <string>
using namespace std;
int main()
{
    string res="ll";
    char ss[16]; //这个长度根据需要吧
    sprintf(ss, "%d", 5);
    string s(ss);
    res+=s;
    cout<<res<<endl;
    auto start = std::chrono::system_clock::now();
     usleep(1000000);
    auto end= std::chrono::system_clock::now();
    std::chrono::duration<double>  timeinter= end - start;
   cout << timeinter.count()<<endl;
}
