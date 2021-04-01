#include <iostream>
enum MonsterType
{
    ogre,//食人魔0
    dragon,//龙1
    orc,//兽人2
    giant_spider,//巨型蜘蛛3
    slime,//史莱姆4
};
//auto monsterType{MonsterType::MONSTER_TROLL};
struct Monster
{
    MonsterType type;
    std::string name;//怪物名字
    int power;//能承受的生命值
};

struct  Disandvantage
{
    int number;
    float percent;
    double profile;
};
struct Fraction
{
    int numerator;//分子
    int denominator;//分母
};
std::string getMonsterType (MonsterType type)
{
    if (type == MonsterType::ogre)
        return "Ogre";
    else if (type == MonsterType::dragon)
        return "Dragon";
    else if (type == MonsterType::orc)
        return "Orc";
    else if (type == MonsterType::giant_spider)
        return "Giant Spider";
    else if (type == MonsterType::slime)
        return "Slime";

    return "Unknown";
}
void printMonter(Monster mon)
{
    std::cout << "this "<<getMonsterType(mon.type)
    <<" name is:"<<mon.name<<
    " ,power is "<<mon.power<<std::endl;

}

void printInfo(Disandvantage info)
{
    std::cout<<"number is:"<<info.number<<"\n";
    std::cout << "percent is:" << info.percent<< "\n";
    std::cout << "profile is:" << info.profile << "\n";
    std::cout << "totally profile is:" << (double)(info.profile * info.percent * info.number)<<std::endl;
}

void multiply(Fraction fracinfo1,Fraction fracinfo2)
{
    double fo1 = static_cast<double> (fracinfo1.numerator )/ static_cast<double> (fracinfo1.denominator);
    double fo2 = (double)fracinfo2.numerator/(double)fracinfo2.denominator;
    std::cout<<"multiply is:"<<fo1*fo2<<"\n";
}
int main()
{
    /*Disandvantage joe{24,0.37,0.5};
     printInfo(joe);
     std::cout<<"-----------------"<<std::endl;
     //printInfo(frank);
     Fraction frac1 = {4,7};
     Fraction frac2 = {14,5};
     multiply(frac1,frac2);*/
     
     Monster ogre{MonsterType::ogre,"tory",140};
     Monster slime{MonsterType::slime, "stack", 149};

     printMonter(ogre);
     printMonter(slime);

     return 0;
}
