#include <iostream>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string k;
    getline(cin, k);
    int count = 0;
    for (int i=0; i<k.length();i++)
    {
        if (k[i] == ' ')
            count ++;
    }
    if (k[0] == ' ')
        count --;
    if (k[k.length()-1] == ' ')
        count --;
    cout << count+1;
    return 0;
}