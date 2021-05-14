//reserveとsortの組み合わせで、大きい順や小さい順にsortできる。
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end()); // {1, 2, 2, 5}
    reverse(vec.begin(), vec.end()); // {5, 2, 2, 1}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

/* 関数基礎(STL: Standard Template Library)

//これの理解には、イテレータを理解すれば行ける。
関数名(配列変数.begin(), 配列変数.end())


//sort関数: ソートする。reserveと大体使い方一緒。
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end()); // {1, 2, 2, 5}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

//reserve関数 : 順序を逆にできる。配列の場合↓
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    reverse(vec.begin(), vec.end()); //これ以外でも(reverse(vec[0], vec[-1]);とかはできなかった。

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}


//swap関数 : 変数の中身を交換してくれる。返り値がない。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 5;

    swap(a, b); //返り値がない。参照渡し的な？

    cout << a << endl; // 5
    cout << b << endl; // 10
}


//min関数は型が同一でなければ、比較してくれない
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a = 1.5;
    int b = 10;
    int answer = min(a, b); // 引数の型がdouble型とint型なのでエラーになる
}

//小さい方を選ぶ「min関数」
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 5;

    int answer = min(a, b); // min関数

    cout << answer << endl; //answerにmin関数の返り値が入っている。
}


*/