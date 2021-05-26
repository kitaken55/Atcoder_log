// n を受け取って、0~n の総和を計算して返す関数
int sum(int n) {
  // ベースケース
  if (n == 0) {
    return 0;
  }

  // 再帰ステップ
  int s = sum(n - 1);
  return s + n;
}


#include <bits/stdc++.h>
using namespace std;

// 0~0の総和を求める
int sum0() {
  return 0;
}
// 0~1の総和を求める
int sum1() {
  int s = sum0();
  return s + 1;  // (0~0の総和) + 1 = 1
}
// 0~2の総和を求める
int sum2() {
  int s = sum1();
  return s + 2;  // (0~1の総和) + 2 = 3
}
// 0~3の総和を求める
int sum3() {
  int s = sum2();
  return s + 3;  // (0~2の総和) + 3 = 6
}

int main() {
  cout << sum3() << endl;  // 6
}


#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}

int main() {
  cout << sum(2) << endl;    // 0 + 1 + 2 = 3
  cout << sum(3) << endl;    // 0 + 1 + 2 + 3 = 6
  cout << sum(10) << endl;   // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
}
