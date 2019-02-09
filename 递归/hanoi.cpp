/*
**Source：http://pkuic.openjudge.cn/dg2/3/
**Auther：Shz
**Data  : February 9, 2019
*/
#include<iostream>

using namespace std;

void hanoi(int num, char a, char b, char c) {
    if (num > 0) {
        hanoi(num - 1, a, c, b);
        cout << a << "->" << num << "->" << b << endl;
        hanoi(num - 1, c, b, a);
    }
}

int main() {
    char a, b, c;
    int num;

    cin >> num >> a >> b >> c;
    hanoi(num, a, b, c);

    return 0;
}
