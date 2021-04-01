#include<iostream>
#include<string>
using namespace  std;
struct message
{
    string name;
    double  money;
};

int main()
{
    cout<<"输入捐赠者的数目：";
    int num;
    cin>>num;
    message mess[num];
    for (int i = 0; i < num; i++)
    {
        cout << "输入捐款人的姓名：";
        cin.get();
        getline(cin, mess[i].name);
        cout<<"输入捐赠金额：";
        cin>>mess[i].money;
    }
    cout<<"以下是捐赠金额超过1000的捐赠者："<<endl;
    int k=0;
    for (int i = 0; i < num; i++)
    {
        if (mess[i].money>10000)
        {
            k++;
            cout<<mess[i].name <<":"<<mess[i].money<<endl;
        }
    }
    if (k == 0)
    {
        cout<<"none"<<endl;
    }
    k=0;
    cout << "以下是其他捐赠者：" << endl;
    for (int i = 0; i < num; i++)
    {
        if (mess[i].money <= 10000)
        {
           k++ ;
            cout << mess[i].name << ":" << mess[i].money << endl;
        }
    }
    if (k == 0)
    {
        cout << "none" << endl;
    }
}