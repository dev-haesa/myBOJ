#include <iostream>
#include <cmath>
using namespace std;

int MyGCD(int a, int b);
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n;
    while (true){
        cin >> m >> n;
        
        if (m==0 && n==0) {
            break;
        }
        
        if (m == n) {
            break;
        }
        
        if (m < n) {
            if (m == MyGCD(m, n)) {
                cout << "factor" << "\n";
            }
            else {
                cout << "neither" << "\n";
            }
        }
        else {
            if (n == MyGCD(m, n)) {
                cout << "multiple" << "\n";
            }
            else {
                cout << "neither" << "\n";
            }
        }
        
    }
    
    return 0;
}
int MyGCD(int a, int b){
    if (a < b){ // swap
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    if (b == 0){
        return a;
    }
    
    else {
        return MyGCD(b, a%b);
    }
}