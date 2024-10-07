#include <iostream>
#include <cmath>
using namespace std;
bool *eratosthenes(int a);

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int max_num = 2 * 123456;
    bool *is_prime = eratosthenes(max_num);
    int count = 0;
    while (true){
        int input;
        cin >> input;
        if (input == 0){
            break;
        }
        for (int i=input+1; i<2*input+1; i++){
            if (is_prime[i]){
                count ++;
            }
        }
        cout << count << "\n";
        count = 0;
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