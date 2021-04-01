#include <iostream>

using namespace std;
void display(const double &r);

class A
{
    public:
        A(int i, int j)
        {
            x = i;
            y = j;
            cout<<x<< " "<<y <<endl;
        }
    private:
        int x,y;
};

class R
{
    public:
        R(int r1,int r2)
        {
            R1 = r1;
            R2 = r2;
        }
        void print();
        void print() const;
    private:
        int R1,R2;
};

void R::print()
{
    cout<<"normal "<< endl;
    cout<< R1 << " "<< R2 <<endl;
}
void R::print() const
{
    cout<<"normal object"<<endl;
    cout<< R1 << " "<< R2 <<endl;
}


int main()
{
  /*  double d = 9.5;
    display(d);

    A const a(3,4);*/
    R const a(3,4);
    a.print();
    R b(9,9);
    b.print();
    return 0;
}

void display(const double &r)
{
    cout<< r <<endl;
}
