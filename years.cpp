#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int year;
    bool isleapyear;
    cout<< "please enter year:";
    cin>>year;
    isleapyear=((year%4==0 && year%100 !=0) || (year%400==0));
    if(isleapyear)
    {
        cout <<"is leapyear"<<endl;
    }else{
        cout << "not is leapyear"<<endl;
    }
    return 0;
}
