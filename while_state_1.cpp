#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*char  mychar{'a'};
    while (mychar <= 'z')
    {
        cout<< mychar<<" : "<<static_cast<int>(mychar)<<"\n";
        ++mychar;
    }*/
    int outer{1};

    while (outer <= 5)
    {
        int inner{5};

        while (inner >= 1)
        {
            if (inner <= outer)
                std::cout << inner << ' ';
            else
                std::cout << "x "; 

            --inner;
        }


        std::cout << '\n';

        ++outer;
    }

    return 0;
}
