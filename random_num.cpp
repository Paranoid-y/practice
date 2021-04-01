#include <iostream>
#include <cstdlib>
//#include <random.hpp>
unsigned int PRNG()
{
    static unsigned int seed{5323};
    seed = 8253729 * seed + 2396403;
    return seed * 32768;
}
int main()
{
   // std::srand(5323);
    for(int count{1}; count <= 100; ++count)
    {
       // std::cout<< PRNG() <<" ";
        std::cout<<std::rand()<<" ";
        if(count % 5 == 0)
            std::cout<<std::endl;
    }
   /* std::cout<< Random::get(1,6)<<"\n";
    std::cout<< Random::get(1,10)<<"\n";
    std::cout<< Random::get(1,20)<<"\n";*/
    return 0;
}
