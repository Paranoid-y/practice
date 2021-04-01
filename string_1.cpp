#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter full name:";
    string myname{};
    getline(cin,myname);


    cout << "enter your age:";
    string age{};
    getline(cin,age);
    cout << myname + age << endl;
    cout << age.length() << endl;
    return 0;
}
