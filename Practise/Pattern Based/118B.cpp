#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int row = (2*n)+1;
    for(int i=0; i<row; i++) {
        if(i<n) {
            for(int j=0; j<n-i; j++)
                cout << "  ";
            for(int j=0; j<i+1; j++){
                if(i==0) cout << j; 
                else 
                cout << j << " ";
            }
            for(int j=i-1; j>=0; j--)
            {
                if(j ==0) cout << j;
                else
                    cout << j << " ";
            }
        }
        else if(i>n) {   
            for(int j=0; j<i-n; j++)
                cout << "  ";
            for(int j=0; j<row-i; j++) 
            {
                if(row-i == 1) cout << j;
                else
                cout << j << " ";
            }
            for(int j=row-i-2; j>=0; j--){
                if(j == 0) cout << j;
                else
                    cout << j << " ";
            }
        }
        else if(i==n){
            for(int j=0; j<n; j++) 
                cout << j << " ";
            for(int j=n; j>=0; j--) {
                if(j ==0) cout << j;
                else
                    cout << j << " ";
            }
        }
        cout << endl;
    }
}
