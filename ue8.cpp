#include <stdio.h>

int main(void){

    int felda[4];
    int feldb[5];
    int feldc[9];
    for (int i = 0; i <= 3; i++){ // Belegung Feld A
        felda[i] = 1+(i*2);
    }
    felda[4] = 6;
    for (int i = 0; i <= 5; i++){
        feldb[i] = 2+(i*2);
    }

    int tickera = 0;
    int tickerb = 0;

    while(tickera <= 4 and tickerb <= 5){
        int sum = tickera + tickerb;
        if(tickerb == 5){
            feldc[sum] = felda[tickera];
            tickera++;
        }
        if(tickera <= 3 && tickerb <=4){
            if (felda[tickera] > feldb[tickerb] and tickerb < 5) {
                feldc[sum] = feldb[tickerb];
                tickerb++;
            } else {
                feldc[sum] = felda[tickera];
                tickera++;
            }
        }else if(tickerb < 5){
            feldc[sum] = feldb[tickerb];
            tickerb++;
        }


    }

    for(int i = 0; i<9; i++){
        int n = feldc[i];
        printf("%d\n", n);
    }

    return 0;
}