#include<iostream>
#include<string>
#include<limits.h>
using namespace std;
class Solution
{
public:
    long long StrToInt(string str)
    {
        if (str.empty())
            return 0;//当 str 为空时直接返回 0 
        string::iterator sit = str.begin();
        long long ret = 0;
        int flag = 1;
        if(*sit == '-') flag = -1;
        if (*sit == '-' || *sit == '+')
        {
            sit++;
        }
        while (sit != str.end() && *sit >= '0' && *sit <= '9')
        {
            ret *= 10;
            ret += *sit - '0';
            sit++;
        }
        ret = ret * flag;

        if(ret >= INT_MAX || ret <= INT_MIN)
        {
            return 0;
        }
        return ret;
    }
};

int main(int argc,char *argv[])
{
    string str = argv[1];
    Solution s;
    printf("str  to int is  %ld\n", s.StrToInt(str));
    return 0;
}

