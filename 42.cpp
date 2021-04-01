#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    char ch;
    int sum=0;
    file.open("demo.txt");
    if (! file.is_open())
    {
        cout<<"打开文件失败"<<endl;
        exit(EXIT_FAILURE);
    }
    file>>ch;
    while(file.good())
    {
        ++sum;
        file>>ch;
    }
    if (file.eof())
    {
        cout<<"到达文件结尾"<<endl;
    }
    cout<<"一共有"<<sum<<"个字符"<<endl;
}