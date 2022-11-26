#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a; cin >> b; cin >> c;
    while(!(a == 0 && b == 0 && c == 0)){
        if ( c*c == a*a + b*b ){
            cout << "right" << "\n";
        }
        else if (b*b == a*a + c*c){
            cout << "right" << "\n";
        }
        else if (a*a == b*b + c*c){
            cout << "right" << "\n";
        }
        else {
            cout << "wrong" << "\n";
        }
        cin >> a; cin >> b; cin >> c;
    }
    return 0;
}