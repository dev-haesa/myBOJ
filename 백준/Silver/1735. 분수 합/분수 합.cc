#include <iostream>
using namespace std;

int MyGCD(int a, int b);
int MyLCM(int a, int b);
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    int e, f, lcm;
    lcm = MyLCM(b, d);
    e = lcm / b;
    f = lcm / d;
    int g, h;
    g = a*e + c*f;
    f = MyGCD(g, lcm);
    cout << g/f << " " << lcm/f << "\n";
    
    return 0;
}
int MyGCD(int a, int b){
    if (a < b){ // swap
        int temp;
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

int MyLCM(int a, int b){
    int temp;
    temp = (a * b) / MyGCD(a, b);
    return temp;
}