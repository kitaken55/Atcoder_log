//提出言語がpyhonになってて、ずっと悩んでた問題
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  
  int sum, ave;
  for(int i = 0; i < N; i++) {
      cin >> A.at(i);
      sum += A.at(i);
  }
  ave = sum / N;
  
  for(int i = 0; i < N; i++) {
      cout << abs(A.at(i) - ave) << endl;
  }
}
