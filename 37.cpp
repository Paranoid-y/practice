#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
#define num 10
int main()
{
    cout<<"请在下列选项中选择一个："<<"\n"
             <<"c) carnivore        p)pianist"<<"\n"
             << "t) tree                   g)game" << endl;
    char choice;
    bool flag=true;
    while(flag)
    {
        cin>>choice;
        switch (choice)
        {
            case  'c' : cout <<" A maple is a carnivore" << endl;
                               flag=false;
                            break;
            case 'p':cout << " A maple is a pianist" << endl;
                             flag = false;
                              break;
            case 't':cout << " A maple is a tree" << endl;
                            flag = false;
                            break;
            case 'g':cout << " A maple is a game" << endl;
                           flag = false;
                           break;
            default:cout << " 请输入正确的选项c,p,t,g:" << endl;
            break;
         }
    }
}
