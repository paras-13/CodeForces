#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    string s;
    int sum = 0;
    while(t--)
    {
        sum = 0;
        for(int i=0; i<3; i++)
        {
            cin >> str;
            if(str.find('?')!=string::npos) s = str;
        }

        for(int i=0; i<3; i++)
        {
            if(s[i] == '?') continue;
            else sum+= (int)s[i];
        }
        cout << (char)(198-sum) << endl;
    }
}