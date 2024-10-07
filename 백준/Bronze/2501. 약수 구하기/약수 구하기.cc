#include <iostream>
#include <cmath>
using namespace std;

int MyGCD(int a, int b);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n;
    cin >> m >> n;
    
    bool factor[m+1];
    factor[0] = false;
    
    for (int i=0; i<m+1; i++){
        if (i == MyGCD(i, m)){
            factor[i] = true;
        }
        else {
            factor[i] = false;
        }
    }
    
    int count = 0;
    for (int i=1; i<m+1; i++){
        if (factor[i] == true){
            count ++;
        }
        if (count == n){
            cout << i << "\n";
            break;
        }
        
        if (i==m && count<n) {
            cout << "0" << "\n";
            break;
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