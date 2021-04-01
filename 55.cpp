#include<iostream>
#include<string>
using namespace std;
const int  Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill_arr(double p[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "enter  " << Snames[i] << "  expenses:";
        cin >> p[i];
    }
}

void show(double da[])
{
    double total=0.0;
    cout << "\n EXpenses\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout<< Snames[i]<< ": $ " << da[i]<<endl;
        total+=da[i];
    }
    cout<<"total expense is :$" << total << endl;
}

int main()
{
    double expenses[Seasons];
    fill_arr(expenses);
    show(expenses);
    return 0;
}