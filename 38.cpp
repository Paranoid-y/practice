#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
#define strsize 20
#define num 2
struct bop
{
    char fullname[strsize];//real name
    char title[strsize];//job
    char bopname[strsize];//secret 
    int preference;
};

int main()
{
    bop b[num] =
    {
        {"WW", "老师", "ww", 0},
        {"YY", "演员", "yy", 1}
    } ;
    cout<< "请选择："<< "\n"
        << "a) 显示真实姓名    b)显示职业"<< "\n"
        << "c) 显示bop姓名    d)显示偏好"<< "\n"
        << "q)退出" << endl;
    char choice;
    while(cin>>choice && choice !='q')
    {
        switch (choice)
        {
            case  'a' :
                              for (int i = 0; i < num; i++)
                              {
                                   cout << b[i].fullname<< endl;
                              }
                            break;
            case 'b':
                               for (int i = 0; i < num; i++)
                              {
                                   cout << b[i].title << endl;
                               }
                               break;
            case 'c':
                                for (int i = 0; i < num; i++)
                                 {
                                      cout << b[i].bopname << endl;
                                 }
                                  break;
            case 'd':
                                 for (int i = 0; i < num; i++)
                                 {
                                     if (b[i].preference==0)
                                     {
                                         cout << b[i].fullname << endl;
                                     }
                                     else if(b[i].preference==1)
                                     {
                                         cout << b[i].title << endl;
                                     }
                                     else
                                     {
                                         cout << b[i].bopname << endl;
                                     }
                                }
                                break;
            default:
                                cout << " 请输入正确的选项a,b,c,d:" << endl;
                                break;
         } 
         cout<<"请选择：";
    }
    cout << "bye" << endl;
    return 0;
}