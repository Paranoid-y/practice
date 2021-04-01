#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cout<<"输入单词："<<endl;
    cin>>word;

    for (int i=word.size()-1,int j =0;i>=0 , j < word.size();i--,j)
    {
        cout << word[i] <<"\n";
    }
}