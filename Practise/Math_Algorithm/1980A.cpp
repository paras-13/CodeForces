// Problem Generator
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_map<char, int> map;
        int n, m;
        string str;
        cin >> n >> m >> str;
        for(int i=0; i<n; i++)
            map[str[i]]++;
        int count = 0;
        for(auto x : map) {
            if(x.second < m) count += m - x.second;
        }
        int rem = 7 - map.size();
        count += rem * m;
        cout << count << endl;
    }
}