#include <stdio.h>

int divit(int dividend, int divisor);
int modit(int dividend, int modulo);
int fibo(int i);
int main(void){
    int m = fibo(5);
    printf("%d", m);
    return 0;
}

int divit(int dividend, int divisor){
    int z;

    while(dividend != 0){
        dividend = dividend- divisor;
        z++;
    }

    return z;
}

int modit(int dividend, int modulo){
    if (dividend == 0){
        printf("Dividend falsch (keine null)");
        return -1;
    }
    if(modulo == 0){
        printf("Modulo falsch (keine Null)");
        return -1;
    }

    while(dividend >= modulo){
        dividend = dividend - modulo;
    }

    return dividend;
}

int fibo(int i){
    int a1 = 0;
    int a2 = 1;
    int sum = 0;
    for (int j = 1; j<i; j++){
        sum = a1 + a2;
        a1 = a2;
        a2 = sum;
    }
    return sum;
}
