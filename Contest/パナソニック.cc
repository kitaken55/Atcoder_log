// 自己回答
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,K;
    cin >> N >> K;    
    int sum = 0;
    int kai = 0;
    for(int i = 0; i < N; i++) {
        kai++;
        for(int j = 1; j <= K; j++) {
            sum += (100*kai) + j;
        }
    }
    cout << sum << endl;
}

//模範解答
#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	int s = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			s += (100 * i + j);
		}
	}
	cout << s << endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    // if(a != b || a != c || b != a || b != c ) {
    //     cout << 0 << endl;
    // }
    if(a == b) {
        cout << c << endl;
    } else if(a == c) {
        cout << b << endl;
    } else if(b == c) {
        cout << a << endl;
    } else {
        cout << 0 << endl;
    }
}

//模範解答
#include<bits/stdc++.h>

using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) cout << c << endl;
	else if (b == c) cout << a << endl;
	else if (c == a) cout << b << endl;
	else cout << 0 << endl;
	return 0;
}