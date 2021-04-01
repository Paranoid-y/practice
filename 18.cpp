#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar
{
    string brand;
    float weight;
    int  calorie;
};

int main()
{
    CandyBar snack = {"Mocha Munch",2.3,350};
    snack.brand="Mocha";
    snack.weight=3.6;
    snack.calorie=400;
    cout<<snack.brand<<"\n"
              <<snack.weight<<"\n"
              <<snack.calorie<<endl;
}