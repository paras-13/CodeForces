// Entertainment in MAC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;
        int flag = 1;
        for (int i = 0, j = str.length() - 1; i < j; i++, j--)
        {
            if (str[i] < str[j])
            {
                flag = 1;
                break;
            }
            else if (str[i] <= str[j])
            {
                flag = 1;
                continue;
            }
            else if (str[i] > str[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag==1)
            cout << str << endl;
        else
        {
            string temp = str;
            reverse(str.begin(), str.end());
            str = str + temp;
            cout << str << endl;
        }
    }
}