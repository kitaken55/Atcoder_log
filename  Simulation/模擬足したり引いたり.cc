//文字列「一文字」(char形)の場合は、シングルコーテーションで囲まなければならない。

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int sum = 1; //最初の「1」は下の文字列を抜き出してやる場合だと換算されないから
  for(int i = 0; i < S.size(); i++) {
      if(S.at(i) == '+') { //ダブルコーテーションだとアカン。
          sum += 1;
      } else if (S.at(i) == '-') {
          sum -= 1;
      }
  }
  cout << sum << endl;
}
