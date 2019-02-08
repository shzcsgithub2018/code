#include<iostream>

using namespace std;

#define MAX 105

void revSave(int a[], int n) {
    int tmp;

    scanf("%d", &tmp);
    n--;
    if (n != 0)
        revSave(a, n);
    a[n] = tmp;
}

int main() {
    int n;
    int a[MAX];

    scanf("%d", &n);
    revSave(a,n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << '\n';

    return 0;
}