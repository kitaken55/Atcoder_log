

/*

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x = 5;
  cout << x << endl; // 5
 
  if (x == 5) {
    cout << x << endl; // 5
 
    string x = "hello"; // int x = 5;のスコープと重なっている
    cout << x << endl; // hello
  }
 
  cout << x << endl; // 5
}

*/

/* bool値の課題(1.08)

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと

  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) { //aがfalseかつbがtrue
    cout << "Bo";
  }
  else if (!b || c) { 
    cout << "Co";
  }

  if (a && b && c) { //abcは一緒になってはいけない
    cout << "foo!";
  }
  else if (true && false) {  
    cout << "yeah!";
  }
  else if (!a || c) { //aがfalse もしくは cがtrue
    cout << "der";
  }

  cout << endl;
}

*/

/* bool型の使い方

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10; // xが10未満のときtrue そうでないときfalseになる
  bool c = false;

  if (a && b) {
    cout << "hello" << endl;
  }
  if (c) {
    cout << "world" << endl;
  }
}

*/

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << (5 < 10) << endl; // 真
  cout << (5 > 10) << endl; // 偽
}

*/