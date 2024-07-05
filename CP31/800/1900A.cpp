// 1900 A. Cover In Water
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int len = s.length();
        int count = 0;
        int flag = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '.')
            {
                count++;
                if (len >= 3)
                {
                    if (i < len - 2)
                    {
                        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2])
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
        if (flag)
            cout << 2 << endl;
        else
        {
            if (count)
                cout << count << endl;
            else
                cout << 0 << endl;
        }
    }
}