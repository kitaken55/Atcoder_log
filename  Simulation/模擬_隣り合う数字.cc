#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  bool ans = false;  // 始めはfalseにしておき、条件を満たすときにtrueになるようにする

  for (int i = 0; i < data.size()-1; i++) { //配列の数は4(0,1,2,3,4)なので、-1してあげねば
    if (data.at(i) == data.at(i + 1)) {
      ans = true;
      break;
    }
  }

  if (ans) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
