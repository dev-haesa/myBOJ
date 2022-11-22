#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    for (int i=0; i<a; i++){
        int input_int;
        string input_str, output="";
        cin >> input_int;
        cin >> input_str;
        for (int j=0; j<(int)input_str.length(); j++){
            for (int k=0; k<input_int; k++){
                output.push_back(input_str[j]);
            }
            
        }
        cout << output << "\n";
    }
    return 0;
}