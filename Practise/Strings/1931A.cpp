// Recovering a small string
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string str;
        int q = n/26;
        int r = n%26;
        int space = 0;
        if(q==0 || r == 0) {
            if(q!=0) {q--; r=26;} 
        }
        if(r<2) {r=27; q--;}
        space = q;
        while(space!=3){
            if(q>0) {
                str.push_back('z');
                q--;
            }
            else if(space<2) {
                str.push_back('a');
                space++;r--;
            }
            else {
                str.push_back(char(96+r));
                space++;
            }
        }
        sort(str.begin(), str.end());
        cout << str << endl;
    }
}