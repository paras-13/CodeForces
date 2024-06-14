// A. My First Sorting Problem
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << endl;
    }
}