#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

#define TOKEN_LEN 10

double revBolish() {
    char token[TOKEN_LEN];

    scanf("%s",token);
    if (strlen(token) == 1) {
        switch (token[0]) {
            case '+': return revBolish() + revBolish();
            case '-': return revBolish() - revBolish();
            case '*': return revBolish() * revBolish();
            case '/': return revBolish() / revBolish();
        }
    }
    else
        return atof(token);
    
}

int main() {
    printf("%f\n",revBolish());

    return 0;
}