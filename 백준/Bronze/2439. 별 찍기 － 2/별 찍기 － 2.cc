#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string k="*";
        for(int j=0; j<i; j++){
            k.push_back('*');
        }
        cout.width(n);
        cout << right << k << "\n";
    }
}