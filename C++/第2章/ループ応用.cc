#include <bits/stdc++.h>
using namespace std;

//この処理を 
int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << endl;
  }
}
//こうできる機能がC++にある(範囲for文)
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int x : a) {
    cout << x << endl;
  }
}

/*
//ループの使い分け
配列の全ての要素に対する処理を行なう場合 → 範囲for文
それ以外で一定回数繰り返し処理する場合 → for文
それ以外の場合 → while文

//whileは終わるまでループしてくれる
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int count = 0;
  while (N > 0) {
    // 2で割り切れなければループを抜ける
    if (N % 2 > 0) {
      break;
    }
    N = N / 2;
    count++;
  }
  cout << count << endl;
}


*/

/*

//型をcharにすることで、文字列を一文字ずつループさせることができる
//範囲for文はコンテナと呼ばれるデータ型に対して使うことができます
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl; //heLLo
}


//値で場合分けをすることができる。
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a = {1, 3, 2, 5, 10};
  
  for (int x : a) {
      if(x == 1) {
          continue;
      }
      
      if(x == 5) {
          break;
      }
      cout << x << endl;
  } 
}




//最初のaと同じ配列の値が何個あるか計算
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // ここにプログラムを追記
  int sum = 0;
  for(int i = 0; i < data.size(); i++){
      if(data.at(i) == a) {
          sum++;
      }
  }
  cout << sum << endl;
}

*/