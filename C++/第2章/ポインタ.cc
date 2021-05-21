#include <bits/stdc++.h>
using namespace std;

int main()
{
    //基本
    int a = 3;
    int &b = a; // bは変数aの参照

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である3が出力される)

    b = 4; // 参照先の値を変更(aが4になる)

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である4が出力される)

    //&は宣言だけでは使えない。
    int a = 123;
    int &b = a; // int型変数aへの参照

    string s = "apg4b";
    string &t = s; // string型変数sへの参照

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> &w = v; // vector<int>型変数vへの参照

    int &c; // 参照先が指定されていないためコンパイルエラーになる


    //文字列の入れ替えも可
    string s = "apg4b";
    string &t = s;

    // 以下の操作で参照先のsが書き換わる
    t.at(0) = 'A';
    t.at(1) = 'P';
    t.at(2) = 'G';

    cout << s << endl; // "APG4b"が出力される
    cout << t << endl; // 参照先のsの値"APG4b"が出力される
}
