#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, e;
    cin >> a; cin >> b; cin >> c; cin >> d; cin >> e;
    cout << (a*a + b*b + c*c + d*d + e*e) % 10;
}
