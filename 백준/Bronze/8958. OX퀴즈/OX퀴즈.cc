#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a; string t;
    cin >> a;
    for (int i=0; i<a; i++){
        cin >> t;
        int k=0, sum=0;
        for (int j=0; j<(int)t.length(); j++){
            if (t[j] == 'O'){
                k++;
            }
            else {
                k=0;
            }
            sum += k;
        }
        cout << sum << "\n";
    }
    return 0;
}