#include <iostream>
#include <cmath>
using namespace std;
bool *eratosthenes(int a);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int first, last;
    cin >> first >> last;
    bool *is_prime;
    is_prime= eratosthenes(last);
    
    for (int i=first; i<last+1; i++){
        if (is_prime[i]) {
            cout << i << "\n";
        }
    }
    
    return 0;
}

bool *eratosthenes(int a){
    bool *is_prime= new bool[a+1];
    fill_n(is_prime, a+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    
    for (int i=2; i< static_cast<int>(pow(a, 0.5)) + 1; i++){
        if (is_prime[i]){
            for (int j=i+i; j<a+1; j+=i){
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}