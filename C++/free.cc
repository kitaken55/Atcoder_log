// std::set を用いた解
#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    set<int> values; // insert するときに重複を取り除いてくれます
    for (int i = 0; i < N; ++i) {
        values.insert(d[i]); // 挿入します
    }

    // set のサイズを出力します
    cout << values.size() << endl;
}

//解き直し
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int A[100];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    
    sort(A, A + N, greater<int>());
    int Alice = 0;
    int Bob = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) Alice += A[i]; 
        else Bob += A[i];
    }
    cout << Alice - Bob << endl;
}
