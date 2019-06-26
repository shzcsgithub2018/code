/*
**Source：http://pkuic.openjudge.cn/hw06/2/
**Auther：Shz
**Data  : February 9, 2019
*/
#include<iostream>
#include<cstring>

using namespace std;

#define MAX 10

int num[MAX] = {1, 2, 3, 4};
int visit[MAX];
int input[MAX];

void full_permutation(int m, int n) {
    static int l = n;
    if (n == 0) {
        int a = input[0], b = input[1], c = input[2], d = input[3];
        if( ((b==1)+(d==4)+(a==3)==1 )&& 
            ((d==1)+(b==4)+(a==2)+(c==3)==1)&& 
            ((d==4)+(b==3)==1)&& 
            ((a==1)+(c==4)+(d==2)+(b==3)==1) 
         )
            for (int i = 0; i < l; i++)
                cout << input[i] << endl;
        return;
    }
    for (int i = 0; i < m; i++) {
        if (visit[i] == 1) continue;
        visit[i] = 1;
        input[l-n] = num[i];
        full_permutation(m, n - 1);
        visit[i] = 0;
    }
}

int main() {
    int m, n;
    
    memset(visit, 0, sizeof(visit));
    // cin >> m >> n;
    // for (int i = 0; i < m; i++)
    //     cin >> num[i];
    full_permutation(4, 4);

    return 0;
}