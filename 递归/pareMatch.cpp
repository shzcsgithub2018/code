/*
**Source：http://pkuic.openjudge.cn/dg2/1/
**Auther：Shz
**Data  : February 9, 2019
*/
#include<iostream>
#include<cstring>

using namespace std;

#define MAX 105

char str[MAX], res[MAX];

int pare_match(int n, int lp_count) {
    while (str[n] != 0 && str[n] != '(' && (str[n] != ')' || lp_count == 0)) n++;
    if (str[n] == 0 || str[n] == ')') return n;
    int r_pare;
    int len = strlen(str);
    if (str[n] == '(') {
        r_pare = pare_match(n + 1, lp_count + 1);
        if (r_pare != len) {
            res[n] = res[r_pare] = 0;
            return pare_match(r_pare + 1, lp_count);
        }
    }
    return len;
}

int main() {
    int len;

    while(cin >> str) {
        memset(res, 0 ,sizeof(res));
        len = strlen(str);
        for (int i = 0; i < len; i++) {
            if (str[i] == '(')
                res[i] = '$';
            else if (str[i] == ')')
                res[i] = '?';
        }
        pare_match(0, 0);
        cout << str << endl;
        for (int i = 0; i < len; i++)
            if (res[i] != 0)
                cout << res[i];
            else
                cout << ' ';
        cout << endl;    
    }

    return 0;
}