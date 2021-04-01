#include "constants.h"

#include <iostream>

double getInitialHeight()
{
    std::cout << "enter the height of the tower in meters";
    double initialHeight;
    std::cin>>initialHeight;
    return initialHeight;
}

double calculateHeight(double initialHeight,int secondsPassed)
{
    double distanceFallen{(myConstants::gravity* secondsPassed*secondsPassed)/2.0};
    double currentHeight{ initialHeight-distanceFallen};
    return currentHeight;
}
void printHeight(double height,int secondsPassed)
{
    if(height>0.0)
    {
        std::cout<<"At "<<secondsPassed<<" seconds,the ball is at height\t"<<height<<" meters\n";
    }else{
        std::cout<<"At "<<secondsPassed<<" seconds,the ball is on the ground\n";
    }
}

void calculateAndPrintHeight(double initialHeight,int secondsPassed)
{
    double height{calculateHeight(initialHeight,secondsPassed)};
    printHeight(height,secondsPassed);
}


int main()
{
    const double initialHeight{ getInitialHeight()};

    /*calculateAndPrintHeight(initialHeight,0);
    calculateAndPrintHeight(initialHeight,1);
    calculateAndPrintHeight(initialHeight,2);
    calculateAndPrintHeight(initialHeight,3);
    calculateAndPrintHeight(initialHeight,4);
    calculateAndPrintHeight(initialHeight,5);*/
    int seconds{0};
    double height;
   do{
       height = calculateHeight(initialHeight,seconds);
       printHeight(height,seconds);
       ++seconds;
   }while(height > 0.0);

    return 0;
}
