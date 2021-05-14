#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n = 4;
  rep(i, n) {
    cout << i << ", " << n << endl;
    n--; // 回数を書き換え
    i++; // カウンタ変数を書き換え・カウンタ変数の数だけループする。
  }
}


/* インプットで処理

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)  

int main() {
  int N;
  cin >> N;

  int sum = 0; // 合計点を表す変数
  int x;       // 入力を受け取る変数

  rep(i, N) {
    cin >> x;
    sum += x;
  }

  cout << sum << endl;
}

*/


/* repマクロについて

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  rep(i, 3) { //iは何回か数えてくれる(カウンタ変数)
    cout << "Hello" << endl;
    cout << "AtCoder" << endl;
  }
}

*/