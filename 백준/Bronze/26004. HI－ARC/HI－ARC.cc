#include <iostream>
#include <string>
using namespace std;

enum HIARC{
    H, I, A, R, C
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int num;
    cin >> num;
    
    string input;
    cin >> input;
    
    int count[5]={};
    for (int i=0; i<num; i++){
        if (input[i] == 'H'){
            count[H]++;
        }
        else if (input[i] == 'I'){
            count[I]++;
        }
        else if (input[i] == 'A'){
            count[A]++;
        }
        else if (input[i] == 'R'){
            count[R]++;
        }
        else if (input[i] == 'C'){
            count[C]++;
        }
    }
    int min=10000000;
    for (int i=0; i<5; i++){
        if (min > count[i]){
            min = count[i];
        }
    }
    cout << min;
    return 0;
}