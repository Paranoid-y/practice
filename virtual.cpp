#include <iostream>
using namespace std;
class People{
    public:
        People(char *name,int age);
        virtual void display();
    protected:
        char *m_name;
        int m_age;
};
People::People(char *name,int age):m_name(name),m_age(age){}
void People::display()
{
    cout<<m_name<<"toyear"<<m_age<<"years old,is no job"<<endl;
}

class Teacher:public People{
    public:
        Teacher(char *name,int age,int salary);
        virtual  void display();
    private:
        int m_salary;
};

Teacher::Teacher(char *name,int age,int salary):People(name,age),m_salary(salary){}
void Teacher::display()
{
    cout<<m_name<<"toyear"<<m_age<<"years old,is a teacher ,salary is "<<m_salary<<endl;
}

int main()
{
    People *p = new People("tom",23);
    p->display();

    p = new Teacher("tony",24,34);
    p->display();
    return 0;
}
