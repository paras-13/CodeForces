// 1866 A. Ambitious Kid
#include <iostream>
#include <cmath>
#define loop(i, n) for(int i=0; i<n; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vec vector<int>
using namespace std;
int main() {
    int n, num;
    int near=INT_MAX;
    cin >> n;
    loop(i, n) {
        cin >> num;
        if(abs(0-num) < near) near = abs(num);
    }
    cout << near;
}
