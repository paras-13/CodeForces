// A. Watermelon
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n==2) {cout << "No"; return 0;}
    if(n%2==0) cout << "Yes";
    else cout << "No";
}