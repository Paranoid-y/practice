#include<iostream>
#include<array>
#include<string>
using namespace std;
const int  Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring","Summer","Fall","Winter"};

void fill(std::array <double ,Seasons> *p)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "enter  " << Snames[i] << "  expenses:";
        cin >> (*p)[i];
    }
}

void show(std::array<double, Seasons> da)
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
    std::array<double,Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}