//オーバーロード : 引数の数でどちらかの関数かに行く
#include <bits/stdc++.h>
using namespace std;
 
// 2つの引数のうち最も小さい値を返す
int my_min(int x, int y) {
  if (x < y) {
    return x;
  }
  else {
    return y;
  }
}
 
// 3つの引数のうち最も小さい値を返す
int my_min(int x, int y, int z) {
  if (x < y && x < z) {
    return x;
  }
  else if (y < x && y < z) {
    return y;
  }
  else {
    return z;
  }
}
 
int main() {
  int answer = my_min(10, 5); // 2つの引数
  cout << answer << endl; // 5
 
  answer = my_min(3, 2, 5); // 3つの引数
  cout << answer << endl; // 2
}

/*

//条件に当てはまらなかったときのものを書かなかったら、0もしくは不明な値が帰ってくる。
//絶対何かしらはreturn させよう
#include <bits/stdc++.h>
using namespace std;
 
int my_min(int x, int y) {
 
  if (x < y) {
    return x;
  }
 
  // x >= y のときのreturn忘れ
}
 
int main() {
  int answer = my_min(10, 5);
  cout << answer << endl;
}

//returnがされた時点で、関数は終わる
#include <bits/stdc++.h>
using namespace std;

void hello() {
  cout << "Hello, ";
  return; // この行までしか実行されない

  cout << "world!" << endl;
  return;
}

int main() {
  hello();
}


#include <bits/stdc++.h>
using namespace std;

// 整数の入力を受け取って返す関数
// 引数なし
int input() {
  int x;
  cin >> x;
  return x;
}

int main() {
  int num = input(); // 引数なし
  cout << num + 5 << endl;
}


#include <bits/stdc++.h>
using namespace std;

// 整数の入力を受け取って返す関数
// 引数なし
int input() {
  int x;
  cin >> x;
  return x;
}

int main() {
  int num = input(); // 引数なし
  cout << num + 5 << endl;
}


#include <bits/stdc++.h>
using namespace std;

// 関数定義
int my_min(int x, int y) {

  if (x < y) {
    return x;
  }
  else {
    return y;
  }

}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl; // 5
}


*/