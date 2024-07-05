// 1903 A. Halloumi Boxes
#include <iostream>
#include <vector>
using namespace std;

bool checkSort(vector<int>v, int n, int i) {
    if(i==n-1) return true;
    if(v[i+1] < v[i]) return false;
    return checkSort(v, n, i+1);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        vector<int>v;
        cin >> n >> k;
        int val;
        for(int i=0; i<n; i++) {
            cin >> val;
            v.push_back(val);
        }
        bool isSorted = checkSort(v, n, 0);
        if(isSorted || k >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}