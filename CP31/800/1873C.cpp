// 1873 C. Target Practise;
#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
using namespace std;

int calculateScore(char str[][10]) {
    int sum = 0;
    loop(i, 10) {
        loop(j, 10) {
            if(str[i][j] == 'X') {
                if(i==0 || i==9 || j==0 || j==9) sum += 1;
                else if(i==1 || i==8 || j==1 || j==8) sum += 2;
                else if(i==2 || i==7 || j==2 || j==7) sum += 3;
                else if(i==3 || i==6 || j==3 || j==6) sum += 4;
                else if(i==4 || i==5 || j==4 || j==5) sum += 5;
            }  
        }
    }
    return sum;
}
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int score = 0;
        char str[10][10];
        loop(i, 10)
        {
            loop(j, 10)
                cin >> str[i][j];
        }
        score = calculateScore(str);
        cout << score << endl;
    }
}
