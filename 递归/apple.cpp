#include<iostream>

using namespace std;

int count(int m, int n) {
    if (m <= 1 || n <= 1) return 1;
    if (m < n)
        return count(m, m);
    else
        return count(m, n-1) + count(m-n, n);
}

int main() {
    int n, apples, plates;
    cin >> n;
    while(n--){
        cin >> apples >> plates;
        cout << count(apples, plates) << '\n';
    
    }
    return 0;
}