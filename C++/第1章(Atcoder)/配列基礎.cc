/* 配列の基礎 ~vector<int>~

//配列同士を「==」で同一かを判定できる。
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> vec1 = { 1, 2, 3 };
  vector<int> vec2 = { 1, 2, 3 };
 
  if (vec1 == vec2) { 
    cout << "OK" << endl;
  }
 
  
  //↓これはコンパイルエラーになる
  if (vec1 == { 1, 2, 3 }) {
    cout << "NG" << endl;
  }
}

//配列はエラーメッセージの観点からも「.at()」で添字を付けて指定するのが望ましい。
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec = { 1, 2, 3 };

  cout << vec.at(0) << endl;
  cout << vec[0] << endl; // .at(0)と同じ
}

//pop_backを使うと、末尾の要素を削除する
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec = { 1, 2, 3 };

  vec.pop_back(); // 末尾の要素を削除

  // vecの全要素を出力
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}


//配列の最後に要素を追加する関数(push_back)
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec = { 1, 2, 3 };

  vec.push_back(10); // 末尾に10を追加

  // vecの全要素を出力
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}


// 入力値(回数、英語の点数、数学の点数)の合計を出す
3
20 100 30
100 5 40
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> math(N); // N個の数学の点数データ
  vector<int> english(N); // N個の英語の点数データ

  // 数学の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> math.at(i);
  }

  // 英語の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> english.at(i);
  }

  // 合計点を出力
  for (int i = 0; i < N; i++) {
    cout << math.at(i) + english.at(i) << endl;
  }
}


// 要素を沢山追加する場合、ループでやるのが一般的
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 100要素の配列で初期化
  vector<int> vec(100);

  // 100個の入力を受け取る
  for (int i = 0; i < 100; i++) {
    cin >> vec.at(i);
  }
}


// 基礎
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 文字列
  string str; // 文字列変数を宣言
  str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入
  cout << str.at(0) << endl; // 1つ目である'a'を出力
  cout << str.size() << endl; // 文字列の長さである4を出力
 
 
  // 配列
  vector<int> vec; // int型の配列変数vecを宣言
  vec = { 25, 100, 64 }; // 25, 100, 64 という整数(int)の列を代入
  cout << vec.at(0) << endl; // 1つめである25を出力
  cout << vec.size() << endl; // 配列の長さである3を出力
}

*/