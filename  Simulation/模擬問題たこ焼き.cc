//模範解答(パターン1は省略可・共通するpriceは一緒に下で一緒に計算できる)
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p;
  cin >> p;
 
  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }
 
  int price, N;
  cin >> price >> N;
  cout << price * N << endl;
}

/* 自己回答

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  cin >> p;
  // パターン1
  if (p == 1) {
    cin >> price;
  }
  // パターン2
  if (p == 2) {
    string text;
    cin >> text >> price;
    cout << text << "!" << endl;
  }
  
  int N;
  cin >> N;
  
  cout << price * N << endl;
}

*/