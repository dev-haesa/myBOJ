#include <iostream>

using namespace std;


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int *sum_sec = new int[n];
    sum_sec[0] = arr[0];

    for (int i=1; i<n; i++){
        sum_sec[i] = sum_sec[i-1]+arr[i];
    }

    for (int k=0; k<m; k++){
        int i, j;
        cin >> i >> j;
        cout << sum_sec[j-1] - sum_sec[i-2] << "\n";
    }
    
}

