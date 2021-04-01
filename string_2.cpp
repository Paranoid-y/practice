#include <string>
#include <iostream>
using namespace std;
int main()
{
    cout << "enter your full name:";
    string name{};
    getline(cin,name);

    cout <<"enter your age:";
    int age{};
    cin>>age;

    int letters{static_cast<int>(name.length())};
    double agePerLetter{static_cast<double>(age)/letters};
    cout << agePerLetter << endl;
    return 0;
}
