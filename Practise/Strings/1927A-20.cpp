// Make It White
#include <iostream>
using namespace std;
int main()
{
    int t, n, paint, ptr;
    string str;
    cin >> t;
    while(t--)
    {
        cin >> n >> str;
        paint = ptr = 0;
        for(int i=0; i<n; i++)
        {
            ptr++;
            if(str[i] == 'B')
            {
                if(paint == 0) paint++;
                else paint+= ptr;
                ptr=0;
            }
        }
        cout << paint << endl;
    }
}