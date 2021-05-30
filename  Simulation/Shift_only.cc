#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int A[200];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    
    bool odd = false;
    int count2 = 0;
    
    while(true) {
        for(int i=0; i < N; i++) {
            if(A[i] % 2 != 0) odd = true;
        }
        
        if(odd) break;
        
        for(int i=0; i < N; i++) {
            A[i] = A[i] / 2;
        }
        count2++;  
    }
    cout << count2 << endl;
}
