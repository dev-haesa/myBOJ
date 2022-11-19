#include <iostream>
#include <string>
using namespace std;

enum alphabet{
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int num[26]={};
    string word;
    cin >> word;
    for(int word_index=0; word_index<word.length(); word_index++){
        switch (word[word_index]) {
            case 'a' : num[A]++; break;
            case 'A' : num[A]++; break;
            case 'b' : num[B]++; break;
            case 'B' : num[B]++; break;
            case 'c' : num[C]++; break;
            case 'C' : num[C]++; break;
            case 'd' : num[D]++; break;
            case 'D' : num[D]++; break;
            case 'e' : num[E]++; break;
            case 'E' : num[E]++; break;
            case 'f' : num[F]++; break;
            case 'F' : num[F]++; break;
            case 'g' : num[G]++; break;
            case 'G' : num[G]++; break;
                
            case 'h' : num[H]++; break;
            case 'H' : num[H]++; break;
            case 'i' : num[I]++; break;
            case 'I' : num[I]++; break;
            case 'j' : num[J]++; break;
            case 'J' : num[J]++; break;
            case 'k' : num[K]++; break;
            case 'K' : num[K]++; break;
            case 'l' : num[L]++; break;
            case 'L' : num[L]++; break;
            case 'm' : num[M]++; break;
            case 'M' : num[M]++; break;
            case 'n' : num[N]++; break;
            case 'N' : num[N]++; break;
                
            case 'o' : num[O]++; break;
            case 'O' : num[O]++; break;
            case 'p' : num[P]++; break;
            case 'P' : num[P]++; break;
            case 'q' : num[Q]++; break;
            case 'Q' : num[Q]++; break;
            case 'r' : num[R]++; break;
            case 'R' : num[R]++; break;
            case 's' : num[S]++; break;
            case 'S' : num[S]++; break;
            case 't' : num[T]++; break;
            case 'T' : num[T]++; break;
            case 'u' : num[U]++; break;
            case 'U' : num[U]++; break;
                
            case 'v' : num[V]++; break;
            case 'V' : num[V]++; break;
            case 'w' : num[W]++; break;
            case 'W' : num[W]++; break;
            case 'x' : num[X]++; break;
            case 'X' : num[X]++; break;
            case 'y' : num[Y]++; break;
            case 'Y' : num[Y]++; break;
            case 'z' : num[Z]++; break;
            case 'Z' : num[Z]++; break;
        } // end of switch
    } // end of for
    int num_max = 0, max_index = 0;
    for (int num_index=0; num_index < 26; num_index++)
        if (num_max < num[num_index]){
            num_max = num[num_index];
            max_index = num_index;
        }
    int same=0;
    for (int num_index=0; num_index < 26; num_index++){
        if (num[num_index] == num_max)
            same++;
    }
    if (same > 1){
        cout << "?"; return 0;
    }
    else
    {
        char answer = 65 + max_index;
        cout << answer;
    }
    return 0;
}