/*
**Source：http://pkuic.openjudge.cn/dg2/2/
**Auther：Shz
**Data  : February 9, 2019
*/
#include<iostream>
#include<cstring>

using namespace std;

#define MAX sizeof(int) * 8

char c_code[MAX + 5];
char str[MAX + 5];

void get_com_code(int num, int pos) {
    if (pos == 0) return;
    c_code[pos - 1] = (num & 0x1) + '0';
    get_com_code(num >> 1, pos - 1);
}

int main() {
    int  num;

    while(cin >> str, (str[0] >= '0' && str[0] <= '9') || str[0] == '-') {
        num = atoi(str);
        get_com_code(num, MAX);
        c_code[MAX] = 0;
        cout << c_code << endl;
    }
    return 0;
}