#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n); // 직접 동적할당 하지 말고 vector 쓰기
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> dp(n);
    fill(dp.begin(), dp.end(), 1);

    for(int i=1; i<n; i++){
        int max_count = 0;
        for (int j=0; j<i; j++){
            if(arr[j]<arr[i]) max_count = max(max_count, dp[j]);
        }
        dp[i] = max_count+1;
    }
    
    cout << *max_element(dp.begin(), dp.end()) << "\n"; 
    
}