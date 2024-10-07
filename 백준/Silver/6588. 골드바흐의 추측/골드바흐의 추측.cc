#include <iostream>
#include <cmath>
using namespace std;
bool *eratosthenes(int a);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool *is_prime;
    is_prime = eratosthenes(1000000);
    int prime_list[1000000];
    fill_n(prime_list, 1000000, 0);
    int index_prime = 0;
    
    for (int i=3; i<1000001; i++){
        if (is_prime[i]) {
            prime_list[index_prime] = i;
            index_prime++;
        }
    }
    
    
    while (true){
        int n;
        cin >> n;
        if (n == 0){
            break;
        }
        for (int i=0; i<n-1; i++){
            if (is_prime[i] == true && is_prime[n-i]) {
                cout << n << " = " << i << " + " << n-i << "\n";
                break;
            }
        }
    }
    
    return 0;
}

bool *eratosthenes(int a){
    bool *is_prime= new bool[a+1];
    fill_n(is_prime, a+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    
    for (int i=2; i< sqrt(a)+1; i++){
        if (is_prime[i]){
            for (int j=i+i; j<a+1; j+=i){
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}
