/*
*Source：http://pkuic.openjudge.cn/dg1/4/
*Auther：Shz
*Data  : February 8, 2019
*/
#include<iostream>

using namespace std;

#define MAX 105

int qGame(char str[], int n) {
    int seq_next;

    if (str[0] != str[n]) return n;
    else{
        seq_next = qGame(str, n + 1);
        cout << n << ' ' << seq_next << endl;
        return qGame(str, seq_next + 1);
    }
}

int main() {
    char str[MAX] = {0};
    cin >> str;
    qGame(str,0);

    return 0;
}