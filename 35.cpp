#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    while (cin.get(ch) && ch!= '@')
    {
            if (islower(ch))
            {
                ch=toupper(ch);
                cout<<ch;
            }
            else if (isupper(ch))
            {
                     cout << tolower(ch) ;
            }
            else
            {
                cout<<ch;
            }
    }
    cout<<"\n"<<endl;
}
