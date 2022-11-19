#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;
const int MAX = 100;
int score[MAX];

double countOver(int[], int, int);

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, i, j, k; // n은 학생수, i는 배열 상수, j는 상대평가 A 비율, k는 절대평가 최소 점수
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> score[i];
    }
    cin >> j >> k;
    
    // 상대평가
    
    int result1, result2;
    result1 = ceil(n*j/100);
    result2 = countOver(score, n, k);
    cout << result1 << ' ' << result2;
    return 0;
}

double countOver(int x[], int size, int num1) {
    int result = 0;
    
    for(int i=0; i<size; i++){
        if (x[i] >= num1) {
            result += 1;
        }
    }
    
    return result;
}
