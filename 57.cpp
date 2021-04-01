#include<iostream>
#include<string>
using namespace std;
const int SLEW  = 30;
struct student {
    char fullname[SLEW];
    char hobby[SLEW];
    int toplevel;
};

//两个参数，一个是指向结构体student 的指针
//一个是数组元素的个数
//这个函数收集和存储有关学生的数据，通过终端输入
int getinfo(student *pa, int n)
{
    int i; 
    for (i= 0; i < n; i++)
    {
        cout<< "输入姓名：";
        cin.getline((pa+i)->fullname,SLEW);
        cout<<"输入爱好：";
        cin.getline((pa+i)->hobby,SLEW);
        cout<<"输入等级：";
         cin >> (pa+i)->toplevel;
        if (!cin)
        {
            break;
        }else{
            cin.get();
        }
    }
    return i;
}

//显示student信息
void display1(student st)
{
    cout<<st.fullname << endl;
    cout<<st.hobby<<endl;
    cout << st.toplevel<<endl;
}
//通过传递地址，显示student信息
void display2(const student * ps)
{
    cout<< ps->fullname<<endl;
    cout<< ps->hobby << endl;
    cout<<ps->toplevel << endl;
}

//显示指定个数n个的student信息
void display3(const student pa[],int n)
{
    for (int i; i < n; i++){
        cout<<pa[i].fullname<<endl;
        cout << pa[i].hobby<<endl;
        cout <<  pa[i].toplevel << endl;
    }
}


int main()
{
    cout<< "输入班级大小：";
    int class_size;
    cin>>class_size;
    while (cin.get () !='\n'){
        continue;
    }
    student *ptr_stu=new student[class_size];
    int entered= getinfo(ptr_stu,class_size);

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout<<"done"<<endl;
    return 0;
}
