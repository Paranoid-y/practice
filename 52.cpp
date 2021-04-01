#include<iostream>
using namespace std;

int jiecheng(int number)
{
    int result;
    if ( number ==0 ){
        result=1;
    }else{
        result=number *(jiecheng(number-1));
    }
    return result;
}
int main()
{
    int number;
    cout<<"输入：\n";
     while( cin>>number )
    {
        cout<< number << "! 为：";
        cout<<jiecheng(number);
        cout<<"\n下一组数据：(q退出)\n";
    }
    cout<<"done"<<endl;
    return 0;
}