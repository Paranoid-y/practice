#ifndef CLOCK
#define CLOCK
class Clock
{
    public:
        Clock(int newh, int newm, int news);
        Clock(Clock &c);
        void Settime(int newh, int newm, int news);
        void Showtime();
        ~Clock();
    private:
        int hour,minute,second;
};

#endif
