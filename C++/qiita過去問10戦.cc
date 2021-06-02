//C問題
#include <iostream>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for (int a = 0; a <= N; ++a) {  // 10000円の枚数を 0 〜 N で調べる
        for (int b = 0; b + a <= N; ++b) {  // 5000円の枚数を 0 〜 N-a で調べる
            int c = N - a - b;  // 1000円の枚数は決まる
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {  // 答えが見つかったら
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }

    // 答えを出力 (見つかっていなくても -1 -1 -1 になるので OK です)
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}

//ソート
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int a[100];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> a[i];
    
    sort(a, a + N, greater<int>());
    int Alice = 0;
    int Bob = 0;
    
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) { //Aliceのターン
            Alice += a[i];
        } else {
            Bob += a[i];
        }
    }
    
    cout << Alice - Bob << endl;
}


//入力ループ
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int A[210];
    
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    
    int res = 0;
    

    while(true) {
    bool odd = false;
    for(int i = 0; i<N; i++) {
        if(A[i] % 2 != 0) odd = true;
    }
    
    if(odd) break;
    
    for(int i = 0; i<N; i++) {
        A[i] /= 2;
    }
    res++;
    
    }

    cout << res << endl;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    
    //stringなので、シングルコーテーションが必要
    if(s[0] == '1') count++;
    if(s[1] == '1') count++;
    if(s[2] == '1') count++;
    
    cout << count << endl;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c = a * b;
    if (c % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;
}
