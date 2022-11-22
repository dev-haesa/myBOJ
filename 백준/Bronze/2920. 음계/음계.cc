#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool is_asc=false, is_desc=false;
    int a[8];
    for (int i=0; i<8; i++){
        cin >> a[i];
    }
    for (int i=0; i<7; i++){
        if (a[i] < a[i+1]){
            is_asc = true;
        }
        else if (a[i] > a[i+1]) {
            is_desc = true;
        }
    }
    if (is_asc == true && is_desc == false){
        cout << "ascending";
    }
    else if (is_asc == false && is_desc == true){
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
    return 0;
}