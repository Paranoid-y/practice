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
    CandyBar *snack = new CandyBar[2]{
        {"mo",2.3,400},
        {"mauves",4.5,678}
    };
  for (size_t i = 0; i < 2; i++)
  {
      cout << snack[i].brand << "\n"
           << snack[i].weight << "\n"
           << snack[i].calorie << endl;
  }
  
    delete []snack;
}