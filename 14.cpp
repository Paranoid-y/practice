#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    cout<<"输入你的姓：";
    string  first;
    getline(cin,first);
    cout<<"输入你的名：";
    string second;
    getline(cin,second);
    cout<<"你的年龄：";
    int age;
    cin>>age;
    cout<<"你的等级：";
    char  grade;
    cin >>grade;

    cout <<"Name: " << second<<","<<first<<endl;
    cout<<"Grade: "<<(char)(grade+1)<<endl;
    cout<<"Age: "<<age<<endl;
   return 0;
}