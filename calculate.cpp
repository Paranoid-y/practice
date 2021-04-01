#include <iostream>
#include <string>
using namespace std;

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich,
};

string getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal::pig:
            return "pig";
        case Animal::chicken:
            return "chicken";
        case Animal::goat:
            return "goat";
        case Animal::cat:
            return "cat";
        case Animal::dog:
            return "dog";
        case Animal::ostrich:
            return "ostrich";
        defalut:
            return "unkown animal";
    }
} 

void printNumberOfLegs(Animal animal)
{
    cout<<"A "<<getAnimalName(animal)<<" has ";
    switch(animal)
    {
        case Animal::ostrich:
        case Animal::chicken:
            cout<<" 2 ";
            break;
        case Animal::goat:
        case Animal::cat:
        case Animal::dog:
        case Animal::pig:
            cout<<" 4 ";
            break;
        defalut:
            cout<<" unkown ";
    }
    cout<<"legs\n";
}


double calcu(double x,double y,char op)
{
    switch(op)
    {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '/':
            return x/y;
        case '%':
            return static_cast<uint64_t>(x)%static_cast<uint64_t>(y);
        default:
            cout<<"unknow op\n";
            return 0;
    }
}



int main()
{
    /*cout<<"enter an integer:";
    double a{};
    cin>>a;

    cout<<"enter an integer:";
    double b{};
    cin>>b;

    cout<<"enter an operator(+,-,*,/,%):";
    char op{};
    cin>>op;

    cout<<a<<" "<<op<<" "<<b<<" = "<<calcu(a,b,op)<<endl;*/
   printNumberOfLegs(Animal::chicken);
   printNumberOfLegs(Animal::dog);
    return 0;
}
