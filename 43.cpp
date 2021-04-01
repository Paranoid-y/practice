#include<iostream>
#include<string>
#include<fstream>
using namespace  std;
int main()
{
   ifstream file;
   string ch;
   file.open("file.txt");
   if (!file.is_open())
   {
       cout << "打开文件失败" << endl;
       exit(EXIT_FAILURE);
   }
   file >> ch;
   while(!file.eof())
   {
       getline(file,ch);
       cout << ch << endl;
   }
   file.close();
}