//#include <cstring>
#include <iostream>
//#include <iterator>
#include <string>
#include <string_view>
int main()
{
   /* char buffer[256];
    int len = sizeof(buffer)/sizeof(char);
    std::cout<<len<<std::endl;
    std::cout << "enter a string:";
    std::cin.getline(buffer,len);

    int spacefoud{0};
    int bufferlen{static_cast<int>(std::strlen(buffer))};
    for(int index{0};index<bufferlen; index++)
    {
        if(buffer[index]=='a')
            ++spacefoud;
    }

    std::cout<<spacefoud<<std::endl;*/

    /*char text[]{"hello"};
    std::string str{text};
    std::string more{str};*/

    std::string_view text{"hello"};
    std::string_view str{text};
    std::string_view more{str};
    std::cout<<text<<" "<<str<<" "<<more<<"\n";

    return 0;
}
