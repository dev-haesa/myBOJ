#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[9];
    for (int i=0; i<9; i++){
        cin >> a[i];
    }
    
    int max, max_index=0;
    max = a[0];
    for (int i=1; i<9; i++){
        if (max < a[i]){
            max = a[i];
            max_index = i;
        }
    }
    cout << max << "\n" << max_index+1;
    return 0;
}