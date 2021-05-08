#include <bits/stdc++.h>
using namespace std;

//「""」のあとにメンバ関数を使いたい場合、「s」をつけなければならない。
int main() {
  string str = "Hello";
  cout << str.size() << endl; // 5
  cout << "Hello"s.size() << endl; // 5（sを末尾につける）
  cout << "Hello".size() << endl; // できない

    //連結は可能
  string str = "Hello";
 
  char c = str.at(0);
  cout << str + c << endl; // HelloH
  
  //charをcinすると、１文字ずつ取り出せる
  char a, b;
  cin >> a >> b; // OK
 
  cout << a << endl; // O
  cout << b << endl; // K
}


/* 文字列基礎

//stringもchar型も全角文字は使えない(特に使う場面ないから気にしなくてOK)
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "こんにちは";
  cout << s.at(0) << endl;

  char c = 'あ';
  cout << c << endl;
}


// 文字列数えとループの応用
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int count = 0;
  for (int i = 0; i < str.size(); i++) { 
    if (str.at(i) == 'O') { //特定の文字列のカウントを取ることも可能。size()とat()の組み合わせ
      count++;
    }
  }

  cout << count << endl;
}


//
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";

  str.at(0) = 'M'; // char型の'M'をstrの'H'の部分に代入(変更)している
  cout << str << endl; // Mello

  if (str.at(1) == 'e') { //「もし、strの1番目がeならば」のような条件分岐も可能
    cout << "AtCoder" << endl;
  }
}


//at()を使った際は、char型になる。
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";

  char c = str.at(0); // char型の値が得られる

  cout << c << endl; // H
}

//char型は「1文字」しか入れられない
#include <bits/stdc++.h>
using namespace std;

int main() {
  char c = 'alkjfdla;kjfa';
  cout << c << endl; // a
}

*/

/* for 基礎

// {}の省略も可能
#include <bits/stdc++.h>
using namespace std;

int main() {

  for (int i = 0; i < 3; i++)
    cout << "Hello!" << endl;

}


//whileとの違い
#include <bits/stdc++.h>
using namespace std;

int main() {

  int j = 0;
  while (j < 3) {
    cout << "Hello while: " << j << endl;
    j++;
  }

  for (int i = 0; i < 3; i++) {
    cout << "Hello for: " << i << endl;
  }

}
 

*/

/* while基礎

//ループの中の変数で何度も使い回せる
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0; // 合計点を表す変数
  int x;       // 入力を受け取る変数
  int i = 0;   // カウンタ変数

  while (i < N) {
    cin >> x;
    sum += x;
    i++;
  }

  cout << sum << endl;
}


//iの使い方
#include <bits/stdc++.h>
using namespace std;

int main() {

  // iを0からはじめる(１から始めない)
  int i = 0;

  // iが5未満の間ループ
  while (i < 5) {
    cout << "Hello" << endl;
    i++;
  }

}

*/