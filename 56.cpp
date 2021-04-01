#include<iostream>
#include<string>
using namespace std;
const int  Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expense
{
    double cost[Seasons];
};

expense fill_arr()
{
    struct expense p;
     for (int i = 0; i < Seasons; i++)
    {
        cout << "enter  " << Snames[i] << "  expenses:";
        cin >> p.cost[i];
    }
    return p;
}

void show(struct expense da)
{
    double total=0.0;
    cout << "\n EXpenses\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $ " << da.cost[i] << endl;
        total +=da.cost[i];
    }
    cout<<"total expense is :$" << total << endl;
}

int main()
{
    expense expenses ;
    expenses = fill_arr();

    cout << expenses.cost[0]<<endl;
    show(expenses);
    return 0;
}