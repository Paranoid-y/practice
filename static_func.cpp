#include <iostream>
using namespace std;

class A
{
    public:
        static void func(A a);
    private:
        int x;
};

void A::func(A a)
{
    cout << a.x << endl; 
} 
int main()
{
    A a;
    a.func(A());
    return 0;
}
