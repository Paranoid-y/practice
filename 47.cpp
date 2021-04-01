#include<iostream>
using namespace std;
double betsy(int);
double pam(int);

void  estimate(int lines,double (*pf)(int));
int main()
{
    int code;
    cout<<"输入你需要的代码行数：";
    cin>>code;
    cout<<"estimate betsy:"<<endl;
    estimate(code,betsy);
    cout<<"estimate  pam:"<<endl;
    estimate(code,pam);
    return 0;
}
double betsy(int lns)
{return 0.05*lns;}
double pam(int lns)
{return 0.03*lns+0.0004*lns*lns;}
void estimate(int lines,double (*pf)(int))
{
    cout<<lines <<endl;
    cout<<(*pf)(lines)<<endl;
}