#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    //int number;
    //cin>>number;
    //cout<< (number >  0 ? number : ~number+1) << endl;
    int line=0;
    char ch;
    bool flag=true;
    while(flag)
    {
        cin.get(ch);
        if (ch=='Q')
        {
            flag=true;
        }
        if (ch=='\n')
        {
            flag=false;
        }
        line++;
    }
} 