#include <stdio.h>

int divitre(int dividend, int divisor);
int moditre(int dividend, int modulo);
int fibore(int i);
int main(void){
    int m = fibore(5);
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

int dividre(int dividend, int divisor){
    if (dividend < divisor){
        return 0;
    }
    return dividre(dividend-divisor, divisor)+1;
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

int moditre(int dividend, int modulo){
    if(dividend == 0 || modulo == 0){
        printf("Dividend oder Modulo null");
    }
    if(dividend < modulo){
        return dividend;
    }
    return moditre(dividend-modulo, modulo);
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



int fibore(int i){
    if(i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return (fibore(i-1) + fibore(i-2));
}
