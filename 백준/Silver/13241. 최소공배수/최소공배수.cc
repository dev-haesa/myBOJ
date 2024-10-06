#include <iostream>
using namespace std;

long long int MyGCD(long long int a, long long int b);
long long int MyLCM(long long int a, long long int b);
// int eratosthenes(int a);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int m, n, k;
    cin >> m >> n;
    k = MyLCM(m, n);
    cout << k << "\n";
    
    
    return 0;
}

long long int MyGCD(long long int a, long long int b){
    if (a < b){ // swap
        long long int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    if (b == 0){
        return a;
    }
    
    else {
        return MyGCD(b, a%b);
    }
}

long long int MyLCM(long long int a, long long int b){
    long long int temp;
    temp = (a * b) / MyGCD(a, b);
    return temp;
}