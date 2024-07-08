// 1877A. Goals Of Victory
#include <iostream>
#include <cmath>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, n) for(int i=0; i<n; i++)
using namespace std;
int main() {
    fastIO;
    int t;
    cin >> t;
    while(t--) {
        int n, val, sum = 0;
        cin >> n;
        loop(i, n-1) {
            cin >> val;
            sum += val;
        }
        if(sum > 0) cout << 0-sum << endl;
        else cout << abs(sum) << endl;
    }
}