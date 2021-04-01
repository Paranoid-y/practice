#include <iostream>
using namespace std;
void move(char A,char B);
void hannoi(int n,char A,char B,char C);
int main()
{
    cout<<"enter number of disks:";
    int disks;
    cin>>disks;
    hannoi(disks,'A','B','C');
    return 0;
}
void move(char A,char B)
{
    cout<<A<<" ---> "<<B<<endl;
}
void hannoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        move(A,C);
    }else{
        hannoi(n-1,A,C,B);
        move(A,C);
        hannoi(n-1,B,A,C);
    }
}
