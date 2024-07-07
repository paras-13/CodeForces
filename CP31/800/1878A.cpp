// 1878 A. How much does Daytona cost?
#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, n) for(int i=0; i<n; i++)
#define vec vector<int>
#define pb push_back
using namespace std;
string solve(int n, int k) {
    vec v;
    int val;
    loop(i, n) {
        cin >> val;
        v.pb(val);
    }
    auto it = find(v.begin(), v.end(), k);
    if(it != v.end()) return "YES\n";
    else return "NO\n";


}
signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k);
    } 
}