#include <iostream>
#include <cmath>
using namespace std;

bool *eratosthenes(int a);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n;
    cin >> m >> n;
    
    bool *is_prime;
    is_prime = eratosthenes(n);
    
    int count = 0;
    int sum = 0;
    int min = 0;
    for (int i=m; i<n+1; i++){
        if (is_prime[i]==true && count==0){
            sum += i;
            count ++;
            min = i;
        }
        else if (is_prime[i] == true){
            sum += i;
            count ++;
        }
        if (i==n && count!=0){
            cout << sum << "\n" << min << "\n";
            
        }
        
        if (i==n && count==0){
            cout << "-1" << "\n";
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
