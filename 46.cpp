#include<iostream>
#include<cmath>
using namespace std;

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

void rect_to_polar(rect *pxy,polar * dapos);
void show_polar( polar * dapos);

int main()
{
    rect rplace;
    polar  pplace;

    cout<< "输入x,y值：";
    while(cin>>rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace,&pplace);
        show_polar(&pplace);
        cout<<"下一组数据（q退出）";
    }
    cout<<"Done"<<endl;
    return 0 ;
}
void rect_to_polar(rect *pxy, polar *dapos)
{
    dapos->distance=sqrt(pxy->x*pxy->x+pxy->y+pxy->y);
    dapos->angle=atan2(pxy->y,pxy->x);
}
void show_polar(polar *dapos)
{
    const double R=57.29577951;
    cout<< "distance is："<<dapos->distance<<endl;
    cout<<"angle is:"<<dapos->angle*R<<endl;
}
