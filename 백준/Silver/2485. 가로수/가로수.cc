#include <iostream>
#include <algorithm>
using namespace std;

long long int MyGCD(long long int a, long long int b);
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;
    cin >> size;
    long long int first, spaces[size];
    
    cin >> first;
    
    for (int i=0; i<size-1; i++){
        long long int input;
        cin >> input;
        spaces[i] = input-first;
        spaces[i+1] = input;
    }
    long long int space_gcd;
    space_gcd = MyGCD(spaces[0], spaces[1]);
    
    for (int i=2; i<size-1; i++){
        space_gcd = MyGCD(space_gcd, spaces[i]);
    }
    
    cout << (spaces[size-1]-first)/space_gcd + 1 - size << "\n";
    
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
