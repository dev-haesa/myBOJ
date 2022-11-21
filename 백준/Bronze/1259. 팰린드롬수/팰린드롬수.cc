#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a = "1";
    while (1){
        cin >> a;
        if (a == "0") break;
        if ((int)a.length() == 1){
            cout << "yes" << "\n";
        }
        else{
            for (int i=0; i<(int)((int)a.length()/2); i++)
            {
                if (a[i]!=a[(int)a.length()-1-i]) {
                    cout << "no" << "\n"; break;
                }
                else if (i == (int)((int)a.length()/2-1)){
                    cout << "yes" << "\n";
                }
            }
        }
        
    }
    return 0;
}