#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, sum=0; string t;
    cin >> a;
    cin >> t;
    for (int i=0; i<a; i++){
        sum += (int)t[i]-48;
    }
    cout << sum;
    return 0;
}