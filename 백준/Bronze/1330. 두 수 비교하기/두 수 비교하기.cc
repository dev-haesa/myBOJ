#include <iostream>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string a, b, k;
    getline(cin, k);
    bool is_space = false;
    for (int i=0; i < (int)k.length(); i++){
        if (k[i] == ' ') is_space = true;
        if (is_space == false){
            a.push_back(k[i]);
            }
        else {
            b.push_back(k[i]);
        }
    }
    if (stoi(a)>stoi(b)){
        cout << ">";
    }
    else if(stoi(a)<stoi(b)){
        cout << "<";
    }
    else{
        cout << "==";
    }
    return 0;
}