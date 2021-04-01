#include <iostream>
#include<stdio.h>
#include<string>
#include <vector>
using namespace std;
int  main()
{
    vector<string> strs = {"flower","flow","flight"};
    if (strs.empty()) return 0;
    string res = "";
    for (int j = 0; j < strs[0].size(); ++j)
    {
         char c = strs[0][j];
        for (int i = 1; i < strs.size(); ++i)
        {
            if (j >= strs[i].size() || strs[i][j] != c)
            {
                cout<<res<<endl;
                return 0;
              }
        }
        res.push_back(c);
      }
      cout << res << endl;
       return 0;
}