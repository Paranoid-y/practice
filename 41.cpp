#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
    char words[20];
    int vow=0,consonant=0,other=0;
    cout<<"输入单词,q为退出程序：";
    while(cin>>words)
    {
        if (isalpha(words[0]))
        {
            if (words[0] == 'a' || words[0] == 'e' || words[0] == 'o' || words[0] == 'i' || words[0] == 'u' || words[0] == 'A' || words[0] == 'E' || words[0] == 'O' || words[0] == 'I' || words[0] == 'U' )
            {
                vow++;
            }
            else if (words[0]=='q' && strlen(words)==1)
            {
                break;
            }
            else
            {
                consonant++;
            }
        }
        else{
            other++;
        }
        
    }
    cout << "以元音开头的单词有" << vow << "个" << endl;
    cout << "以辅音开头的单词有" << consonant << "个" << endl;
    cout << "其他有" << other<< "个" << endl;
}