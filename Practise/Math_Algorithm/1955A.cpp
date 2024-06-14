// Yogurt sale
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSale(int n, int a, int b, vector<int> &dp) {
    if(n <= 0) return 0;
    if(dp[n] != -1) return dp[n];
    dp[n] = min(findSale(n - 1, a, b, dp) + a, findSale(n - 2, a, b, dp) + b);
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> dp(n + 1, -1);
        dp[0] = 0;
        dp[1] = a;
        cout << findSale(n, a, b, dp) << endl;
    }
}
