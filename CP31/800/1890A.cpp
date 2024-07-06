// 1890A. Doremy's Paint 3
#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_map<int, int> mp;
        int n, val;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> val;
            mp[val]++;
        }
        int len = mp.size();
        if(len == 1) cout << "Yes" << endl;
        else if(len == 2) {
            auto f = mp.begin();
            mp.erase(f->first);
            auto s = mp.begin();
            int diff = abs(f->second - s->second);
            if(diff == 1 || diff == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else cout << "No" << endl;
    }
}