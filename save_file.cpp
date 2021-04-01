#include <fstream>
#include<iostream>
using namespace std;

int main()
{
    
    for (int i=0;i<5;i++)
    {
        int buf =i;
        char filename[128];
        sprintf(filename, "./size_4k%d.txt", i);
        ofstream ofSizeFile(filename, ios::app);
        ofSizeFile << buf;
        ofSizeFile.close();
    }
}