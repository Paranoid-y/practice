
/*#include <iostream>
#include <chrono>
using namespace std;
int main()
{
    auto t1 = std::chrono::system_clock::now();
    
    while(true)
    {
         auto t2  = std::chrono::system_clock::now();
         //std::chrono::duration<double> elapsed_seconds = end - start;
        cout<< std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count() << endl;
         int flag = 0;
         if ((flag == 0)&&(1000 == std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count()))
         {
             cout << "hello" << endl;
             flag = flag + 1;
             cout << flag << endl;
         }
        if ((10000 == std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count()) && (flag == 1))
         {
           cout<< "hello 10"<<endl;
           flag = flag + 1;
         }
    }
    return 0;
}*/ 

#include <iostream>
#include <stdio.h>
#include <sys/time.h>
int64_t getCurrentTime()
{
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return tv.tv_sec*1000+tv.tv_usec/1000;
}
int main()
{
    int64_t start = getCurrentTime();
    std::cout<<"nowTime: "<<getCurrentTime()<<"\n";
    while(true)
    {
        int64_t end = getCurrentTime();
        int64_t err = end - start ;
        std::cout << err << std::endl;
        if (err == 1000)
        {
            std::cout<<"hello"<<std::endl;
        }
    }
    return 0;
}
