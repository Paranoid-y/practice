#include<iostream>

using namespace std;
const int MAX =10;
void show(int a[],int size)
{
    
    for (int i = 0; i < size; i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<"\n"<<endl;
}

double average(int a[],int size)
{
    int sum=0;
    double ave;
    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
    }
    ave=(double)sum/size;
    return ave;
}
int main()
{
    int scores[MAX];
    int count=0;
    cout << "依次输入高尔夫成绩(负数提前结束输入)：";
    int i=0;
    while (cin >> scores[i] && count<MAX )
    {
        if (scores[i]<0)
        {
            break;
        }
        else
        {
            count++;
        }
        i++;
    }
    cout <<count << endl;
    show(scores,count);
    cout << "平均数：" << average (scores,count)<<endl;
     return 0;
}