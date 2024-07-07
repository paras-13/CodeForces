// 1881 A. Don't Try To Count
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count = 0;
        bool flag = false;
        for(int i=0; i<6; i++) {
            if(x.find(s)!=-1) {
                cout << count << endl;
                flag = true;
                break;
            }
            count++;
            x += x;
        }
        if(!flag)
            cout << -1 << endl;
    }
}