
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
