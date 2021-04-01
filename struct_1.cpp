#include <iostream>
/*enum MonsterType
{
    MONSTER_ORC,
    MONSTER_GOBLIN,
    MONSTER_TROLL,
    MONSTER_OGRE,
    MONSTER_SKELETON,
}
auto monsterType{MonsterType::MONSTER_TROLL};*/

struct  Employee
{
    int id;
    int age;
    double wage;
};

void printInfo(Employee employee)
{
    std::cout<<"id is:"<<employee.id<<"\n";
    std::cout << "age is:" << employee.age<< "\n";
    std::cout << "wage is:" << employee.wage << "\n";
}
int main()
{
    Employee joe{1,18,23.4};
    Employee frank{2,16,45.786};
     printInfo(joe);
     std::cout<<"-----------------"<<std::endl;
     printInfo(frank);
     return 0;
}
