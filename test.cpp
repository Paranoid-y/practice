#include<iostream>
using namespace std;
enum GameResult {WIN,LOSE,TIE,CANCEL};
/*double power(double x,int n){
    double value=1.0;
    while(n--){
        value *=x;
    }
    return value;
}*/
int main(){
    GameResult result;
    enum GameResult omit=CANCEL;
    for (int count=WIN;count<=CANCEL;count++)
    {
        result=GameResult(count);
        if(result==omit)
            cout << "the game was cancelled" << endl;
        else{
            cout << "the game was played";
            if(result==WIN) cout << "and we won！";
            if(result==LOSE) cout << "and we lost";
            cout << endl;
        }
    }
    return 0;
}
