#include <iostream>
#include <cstddef>

void print(int x)
{
    std::cout<<"print(int):"<<x<<std::endl;
}
void print(int *x)
{
    if(!x)
    {
        std::cout<<"print(int):null"<<std::endl;
    }else{
        std::cout<<"print(int*):"<<*x<<std::endl;
    }
}
bool isVowel(char ch)
{
  switch (ch)
  {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    return true;
  default:
    return false;
  }
}

int* find(int *start, int *end,int value)
{
    for (int *i = start; i != end;++i )
    {
        if(*i==value)
            return i;
    }
}

int main()
{
    /*int v{5};
    int *ptr{&v};
    std::cout<<&v<<"\n";
    std::cout<<ptr<<"\n";*/
    /*short value{7};
    short otherValue{3};

    short *ptr{&value};

    std::cout<<&value<<std::endl;
    std::cout<<value<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    std::cout<<"-----------"<<std::endl;
    *ptr=9;
    std::cout<<&value<<std::endl;
    std::cout<<value<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;


    std::cout<<"----------"<<std::endl;
    ptr=&otherValue;
    std::cout<<&value<<std::endl;
    std::cout<<value<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;


    std::cout<<"----------"<<std::endl;
    std::cout<<sizeof(ptr)<<std::endl;
    std::cout<<sizeof(*ptr)<<std::endl;*/

   /* int *x{nullptr};
    print(x);
    print(0);
    print(nullptr);*/

   /* char name[]{"mollie"};
    int arraylen{sizeof(name)/sizeof(char)};
    int numVowels{0};

    for(char *ptr{name}; ptr < (name+arraylen); ++ptr)
    {
        if(isVowel(*ptr))
        {
            ++numVowels;
        }
    }

    std::cout<<name<<" has "<<numVowels<<"\n";*/
   /* int arr[]{1,2,3};
    std::cout<<2[arr]<<"\n";
    std::cout<<"-----"<<"\n";
    std::cout<<arr[2]<<"\n";*/


    int arr[]{2,5,4,10,8,20,16,40};

    int *found{find(std::begin(arr),std::end(arr),40)};
    std::cout<<*std::begin(arr)<<"\n";
    std::cout<<*(std::end(arr)-1)<<"\n";

    if (found != std::end(arr))
    {
        std::cout<<*found<<"\n";

    }
    return 0;
}
