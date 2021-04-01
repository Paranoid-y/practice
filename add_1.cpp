#include<iostream>
#include<vector>

using namespace std;
vector<int> plusOne(vector<int>& digits) 
{
    int l = digits.size();
	for (int i = l - 1; i >= 0; i--) {
		if (digits[i] != 9)
		{
			digits[i] += 1;
			break;
		}
		else digits[i] = 0;
    }
    for(int j =0;j<l;j++)
    {
        cout<<digits[j]<<" ";
    }
    cout<<"\n";
	vector <int> res;
	res = digits;
	//res[0] = 1;
	//res.push_back(0);
    for(int j =0;j<l;j++)
    {
        cout<<res[j]<<" ";
    }
    cout<<"\n";
	return res;
}

int main()
{
    vector<int> digits;
    digits.push_back(1);
    digits.push_back(3);
    digits.push_back(9);
    plusOne(digits);
    return 0;

}
