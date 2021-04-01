#include <iostream>
#define pi 3.14
#define price_fence 35
#define price_concrete 20
using namespace std;

class Circle
{
    public:
        Circle(float r)
        {
            radius = r;
        }
        float Circumference()
        {
            return 2*pi*radius;
        }
        float Area()
        {
            return pi*radius*radius;
        }
    private:
        float radius;
};

int main()
{
    float radius;
    float cost_fence,cost_concrete;

    cout << "input an radius" <<endl;
    cin >> radius;
    Circle Pool(radius);
    Circle PoolRim(radius+3);
    
    cost_fence = PoolRim.Circumference()*price_fence;
    cout << "fence cost is "<<cost_fence<<endl;

    cost_concrete = (PoolRim.Area()-Pool.Area())*price_concrete;
    cout << "concrete cost is "<<cost_concrete << endl;

    return 0;

}
