#include <iostream>
#include <cmath>
using namespace std;


/*class point
{
    public:
        point(int x = 0,int y = 0):X(x),Y(y){}
        int Gety()
        {
            return Y;
        }
        int Getx()
        {
            return X;
        }
        friend float Distance(point &a,point &b);

    private:
        int X,Y;
};
float Distance(point &a,point &b)
{
    double dx = a.X-b.X;
    double dy = a.Y-b.Y;
    return sqrt(dx*dx+dy*dy);
}*/



class A
{
    friend class B;
    public:
    void Display()
    {
        cout<<x<<endl;
    }
    private:
    int x;
};

class B
{
    public:
        void Set(int i);
        void Display();
    private:
        A a;
};

void B::Set(int i)
{
    a.x=i;
    
}

void B::Display()
{
    a.Display();
}


int main()
{
    /*point p1(3.0,5.0),p2(4.0,6.0);
    cout<< " distance is "<<Distance(p1,p2)<<endl;*/
    B b;
    b.Set(10);
    b.Display();
    return 0;
}

