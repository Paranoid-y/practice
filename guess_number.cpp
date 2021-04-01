#include <iostream>
#include <ctime>
#include <random>
bool playgame(int guesses,int number)
{
    for (int i = 0; i <= guesses; ++i)
    {
        std::cout<<"Guess #"<<i<<" :";
        int guess;
        std::cin>>guess;
        if (guess>number)
        {
            std::cout<<"your guess is too big\n";
        }else if (guess<number)
        {
            std::cout<<"your guess is too small\n";
        }else
        {
            return true;
        }
    }
    return false;
}

bool playagain()
{
    while (true)
    {
        char ch{};
        std::cout <<"would you like to play again(y/n)?";
        std::cin>>ch;
        switch (ch)
        {
        case 'y':
            return  true;
            break;
        case 'n':
             return false;
             break;
        default:
            break;
        }
    }
}
int main()
{
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    std::uniform_int_distribution<int> die{1,100};

    constexpr int guesses{7};
    do
    {
        int number{die(mersenne)};
        std::cout<< "play a game ,I am thinking of a number,you have "<<guesses<<" tries to guess what it is\n";
        bool won(playgame(guesses,number));
        if (won)
        {
            std::cout<<"correct ,you win\n";
        }else
        {
            std::cout<<"sorry,you lose,the correct number was "<<number<<"\n";
        }
    } while (playagain());
    std::cout<<"thank you for playing\n";
    return 0;
    
}
