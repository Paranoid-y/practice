#include<iostream>
#include<cstring>
using namespace  std;
int main()
{
    cout << "Enter your first name: ";
    char first[10];
    cin >> first;
    cout<<"Enter your second name: ";
    char second[10];
    cin>>second;
    cout << "Hers is information in a single string : "<<second<<", "<<first<<endl;
}