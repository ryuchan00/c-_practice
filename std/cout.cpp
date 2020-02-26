//
// Created by yamakawa ryutaro on 2020/02/26.
//
// ここを参考にした
// http://wisdom.sakura.ne.jp/programming/cpp/cpp2.html

#include <iostream>

using namespace std;

int main() {
    char str1[128], str2[128];
    cout << "名前を入力してください>"; // a bと入力する
    cin >> str1 >> str2;
    cout << "ようこそ" << str1 << "さん\n";
    cout << "ようこそ" << str2 << "さん\n";
    return 0;
}
