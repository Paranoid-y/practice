#include <iostream>
using namespace std;
int main()
{
    float  origin_D=100.0;
    float  origin_C=100.0;
    float tmpC,tmpD;
    int i =0;
    float sum=0;
    bool flag=true;
    while (flag)
    {
        i++;
        tmpC=origin_C*0.05;
        origin_C=origin_C+tmpC;
        tmpD=origin_D*0.1;
        sum+=tmpD;
        if (tmpC > sum)
        {
            flag=false;
        }
        cout<< tmpC<<endl;
        cout<<sum<<endl;
    }
    cout<< i << "年之后，C的投资收益>D的投资收益\n"
               <<"C的投资收益为："<<tmpC<<"\n"
               <<"D的投资收益为："<<sum<<endl;
}