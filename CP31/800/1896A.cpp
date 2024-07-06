// 1896 A. Jagged Swaps
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        int val;
        cin >> n;
        vector<int>v;
        for(int i=0; i<n; i++) {
            cin >> val;
            v.push_back(val);
        }
        int min = *min_element(v.begin(), v.end());
        if(v[0] == min )
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}