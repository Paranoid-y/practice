#include <iostream>
#include <iterator>
#include <vector>
/*namespace animalName
{
    enum animal
    {
        Chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animal
    };
}*/

int main()
{
    /*int array[]{1,1,2,3,4,5};
    std::cout<<sizeof(array)<<"\n";
    std::cout<<sizeof(int)<<"\n";
    std::cout<<sizeof(array)/sizeof(int)<<"\n";*/

   // double array[365]{};
   

   /*int legs[animalName::max_animal]{2,4,4,4,2,0};
    std::cout<<"an elephant has "<< legs[animalName::elephant]<<" legs\n";*/

   /* constexpr int array[]{4,6,7,3,8,2,1,9,5};
    //int len = sizeof(array)/sizeof(int);
    int len;
    do{
        std::cout<<"please input a number(1-9):";
        std::cin>>len;
        if(std::cin.fail())
        {
            std::cin.clear();
        }
        std::cin.ignore(32767,'\n');

    }while(len < 1||len > 9);
    
    for (int i = 0;i < len; i++)
    {
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";*/
    
    constexpr int scores[]{84,92,76,81,56};
    constexpr int numStudent{sizeof(scores)/sizeof(int)};
    int maxScore{0};
    int maxIndex{0};
    for(int i{0}; i < numStudent;i++)
    {
        if(scores[i]>maxScore)
        {
            maxScore = scores[i];
            maxIndex = i;
        }
    }
    std::cout<<"best score is "<<maxScore<<"\n";
    std::cout<<"best score index is "<<maxIndex<<"\n";

    
    return 0;
}
