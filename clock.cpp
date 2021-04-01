#include <iostream>
//#include "clock.h"

using namespace std;

/*Clock::Clock(int newh, int newm, int news)
{
    this->hour = newh;
    this->minute = newm;
    this->second = news;
}
Clock::Clock(Clock &c)
{
    this->hour = c.hour;
    this->minute = c.minute;
    this->second = c.second;
}
void Clock::Settime(int newh, int newm, int news)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}
void Clock::Showtime()
{
    cout << this->hour << endl;
    cout << this->minute << endl;
    cout << this->second << endl;
}
Clock::~Clock()
{}*/

/*class Time
{
    public:
        Time(int h=0, int m=0, int s=0):hh(h),mm(m),ss(s){}
        void operator()(int h,int m,int s){
            hh = h;
            mm = m;
            ss = s;
        }
        void Showtime(){
            cout<<hh<<":"<<mm<<":"<<ss<<endl;
        }
    private:
        int hh,mm,ss;
};*/
class Time
{
    public:
        Time(int h=0, int m=0, int s=0){
            hour = h;
            minute = m;
            sec = s;
        }
        void operator++();
        void Showtime(){
            cout<<hour<<":"<<minute<<":"<<sec<<endl;
        }
    private:
        int hour,minute,sec;
};


void Time::operator++()
{
    ++sec;
    if(sec==60)
    {
        sec = 0;
        ++minute;
        if(minute==60)
        {
            minute = 0;
            ++hour;
            if(hour == 24)
            {
                hour=0;
            }
        }
    }
}
int main()
{
    /*Clock c(0,0,0);
    c.Settime(10,20,30);
    c.Showtime();
    cout<<"-------"<<endl;
    Clock c1(c);
    c1.Showtime();
    c1.Settime(90,98,90);
    c1.Showtime();*/
    /*Time t(12,10,12);
    t.Showtime();
    t.operator()(23,20,34);
    t.Showtime();

    t(10,10,10);
    t.Showtime();*/

    Time t(23,59,59);
    t.Showtime();
    ++t;
    t.Showtime();


    return 0;
}
