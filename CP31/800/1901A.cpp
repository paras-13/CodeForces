// 1901 A. Line Trip
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x, curr;
        cin >> n >> x;
        int prev = 0, gap = 0;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr - prev > gap)
                gap = curr - prev;
            prev = curr;
        }
        if (2 * (x - curr) > gap)
            gap = 2 * (x - curr);
        cout << gap << endl;
    }
}