// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略
// 初期値は省略することができます。省略した場合は「要素の型」に対応するゼロ値で初期化されます。
// 例えば要素の型がintなら、初期値は0で、stringなら空文字列("")です。

//大きさの取得
// vector<vector<int>> data(3, vector<int>(4));
// data.size();  // 3 (縦の要素数) (12ではないことに注意!)
// data.at(0).size();  // 4 (横の要素数)
// すべての要素数が必要なときは縦の要素数 * 横の要素数で求める必要があります。


#include <bits/stdc++.h>
using namespace std;

int main() {
  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(3, vector<int>(4,0));
  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }
  // 0の個数を数える
  int count = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      // 上からi番目、左からj番目の画素が0かを判定
      if (data.at(i).at(j) == 0) {
        count++;
      }
    }
  }
   cout << count << endl;
}

//マルバツゲーム(3次元配列)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // N × (3 × 3)要素の配列を宣言
  vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

  // 入力
  for (int i = 0; i < N; i++) {
    // i番目の状態を読む
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> data.at(i).at(j).at(k);
      }
    }
  }

  // 'o'の数を数える
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {

        // 「i番目の状態」「上からj番目」「左からk番目」の要素が'o'か判定
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }

      }
    }
  }

   cout << count << endl;
}
