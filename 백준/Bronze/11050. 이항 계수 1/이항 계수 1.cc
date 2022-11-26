#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n;
    if (n>10) return 0;
    cin >> k;
    if (k<0 && k>n) return 0;
    int result = 1;
    for (int i=0; i<k; i++){
        result *= (n-i);
        result /= (i+1);
    }
    cout << result;
    return 0;
}