#include<iostream>

using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box Box )
{
    
        cout<<Box.maker<<endl;
        cout<< Box.height<<endl;
        cout<<Box.width<<endl;
        cout<<Box.length<<endl;
        cout<<Box.volume<<endl;
    
}
void computer(box *Box)
{
    float m=Box->height*Box->length*Box->width;
    Box->volume=m;
    cout << Box->maker << endl;
    cout << Box->height << endl;
    cout << Box->width << endl;
    cout << Box->length << endl;
    cout << Box->volume << endl;
}
int main()
{
    box Box={"M",4.6,7.8,145,45};
    cout<<"按值传递："<<endl;
    show(Box);
    cout<< "按结构传递："<<endl;
    computer(&Box);
}