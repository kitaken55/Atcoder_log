/* テンプレート(オーバーロードの応用)

#include <iostream>
#include <string>
using namespace std;

//テンプレート:すべての型に対して同じ操作をする(下の関数にて処理)
template <class T>
T equation(T a=0, T b=0);

int main() {
    int x = 10;
    int y = 10;

    int z = equation(x, y);

    cout << z << endl;

    double xd = 1.5;
    double yd = 0.1;

    double zd = equation(xd, yd);

    cout << zd << endl;
}

template<class T>
T equation(T a, T b) {
    return 2 * a + b;
}


*/

/* オーバーロード:多重定義 (オーバーライド(上書き)ではない)
☆同じ関数名でも、型によって関数の行き先が変わる

#include <iostream>
#include <string>
using namespace std;

int equation(int a, int b);
double equation(double a, double b);

int main() {
    int x = 10;
    int y = 10;

    int z = equation(x, y);

    cout << z << endl;

    double xd = 1.5;
    double yd = 0.1;

    double zd = equation(xd, yd);

    cout << zd << endl;
}

int equation(int a, int b) {
    return 2 * a + b;
}

double equation(double a, double b) {
    return 2 * a + b;
}

*/

/* 関数とプロトタイプ宣言

#include <iostream>
#include <string>
using namespace std;

void say_hello(); //プロトタイプ宣言
int sqrt(int a); //プロトタイプ宣言(main後に書いても、引っ張ってきてくれる):メリットは「見やすい」

int main() {
    say_hello();
    say_hello();
    say_hello();
    
    int x = 10;
    int y = x * x;
    int y2 = sqrt(x);
    
    cout << y2 << endl;
}

void say_hello() {
    cout << "Hello world" << endl;
}

int sqrt(int a) { //型宣言しなければならない
    return a * a;
}

*/

/* forと配列

#include <iostream>
#include <string>

using namespace std;

int main() {
    for(int i=0;i<=10;i++) {
        cout << i << endl;
    }

    const int NUM = 5;

    int IDs[NUM];

    IDs[0] = 10;
    IDs[1] = 20;
    IDs[2] = 30;

    int ID2s[] = {100, 200, 300, 400, 500}; //配列は何も入れないことで与えられた分の大きさになる

    cout << ID2s[0] << endl;
    cout << ID2s[1] << endl;
    cout << ID2s[2] << endl;
    cout << ID2s[3] << endl;
    cout << ID2s[4] << endl;

    for (int i=0; i<= NUM; i++) {
        if(i==3) continue;
        if(i==7) break;
        cout << IDs[i] << endl;
    }
}

*/


/* 名前空間とendl

#include <iostream>
#include <string>

using namespace std;

int main() {

    string message = "I love";

    cout << "Hello World" << endl; //C++では「¥n」の代わりに「endl」を使う

    cin >> message;
}

*/

/* bool / if / if文には入れ子構造も可能

#include <iostream>
using namespace std;

int main() {
    bool is_ok = false;
    is_ok = true;

    if(is_ok) {
        cout << "is_ok = true" << "\n";
    }

    int x = 30;

    if(x > 100) {
        cout << "x > 100" << "\n";
    } else if(x > 10) {
        cout << "x > 10" << "\n";
    } else {
        if(x == 10) cout << "xは10です" << "\n";
        cout << "x <= 10" << "\n"
    }

    int y = 50;

    if(x > 10 && y > 10) {
        cout << "xもyも10異常";
    }
}

*/

/*

#include <iostream> //ヘッダファイルを参照(プリプロセッサとして実行= 実質0行目)
using namespace std;
int main(void){
    // Your code here!
    std::cout << "Hello World\n";
}

*/