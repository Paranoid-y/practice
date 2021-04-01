#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int count=0;
    //char  words[20];
    string  words;
    cout<<"依次输入单词（以done结尾）:"<<endl;
    cin>>words;
   // while(strcmp(words,"done"))
   while(words !="done")
    {
        count++;
        cin>>words;
    }
    cout<<"共输入了"<<count<<"个单词"<<endl;
} 