#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num==1) {
        cout << 0;
    }
    else {
        cout << ceil(((double)num*(double)num)/2);
    }
    return 0;
}