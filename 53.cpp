#include<iostream>
using namespace std;

void Show_array(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] <<  " ";
    }
    cout<<endl;
}
void Reverse_array(double array[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout<<endl;
}
double Fill_array(double  array[],int size)
{
    int number;
    cout<< "输入数组：";
    int i=0;
    while(  i < size )
    {
        cin >> number;
         if (i > size)
        {
            cout << "数组个数已到达上限，请停止输入：" << endl;
            break;
        }
        array[i]=number;
        i++;
    }
    Show_array(array, i);
    Reverse_array(array, i);
    return 1.0;
}

int main()
{
    int size=10;
    double array[10];
    Fill_array(array,size);
    return 0;
}