#include <stdio.h>
#include <math.h>
#include "kalkulator.h"

long long int digit_biner(double num){
    int result = 0;
    long long int temp = num;
    do{
        temp /= 2;
        ++result;
    }while(temp != 0);
    return result;
}

long long int digit_oktal(double num) {
    int result = 0;
    long long int temp = num;
    do{
        temp /= 8;
        ++result;
    }while(temp != 0);
    return result;
}
long long int digit_heksa(double num){
    int result = 0;
    long long int temp = num;
    do{
        temp /= 16;
        ++result;
    }while(temp != 0);

    return result;
}

void decimal() {
    double num = 0;
    
    printf("Masukkan Bilangan desimal : ");
    scanf(" %lf", &num);

    //Konversi ke Biner
    long long int digit = digit_biner(num);
    long long int biner[digit];
    long long int temp1 = num;

    for(int i = 0; i < digit; i++){
        biner[i] = 0;
    }

    for(int i = digit-1; i >= 0; i-- ){
        biner[i] = temp1 % 2;
        temp1 /= 2;
        if(temp1 == 0){
            break;
        }
    }

    printf("-Biner        : ");
    for(int i = 0; i < digit; i++){
        printf("%lld", biner[i]);
    }
    printf("\n");

    //konversi ke Oktal

    temp1 = num;

    digit = digit_oktal(num);
    long long int oktal[digit];

    for(int i = 1; i <= digit; i++ ){
        oktal[digit-i] = temp1 % 8;
        temp1 /= 8;
    }

    printf("-Oktal        : ");
    for(int i = 0; i < digit; i++){
        printf("%lld", oktal[i]);
    }
    printf("\n");

    // konversi ke heksadesimal

    temp1 = num;
    digit = digit_heksa(num);
    long long int heksa[digit];

    for(int i = digit-1; i >= 0; i--){
        heksa[i] = temp1 % 16;
        temp1 /= 16;
    }

    printf("-Heksadesimal : ");
    for(int i = 0; i < digit; i++){
        switch(heksa[i]){
            case 10:
                printf("A");
                continue;
            case 11:
                printf("B");
                continue;
            case 12:
                printf("C");
                continue;
            case 13:
                printf("D");
               continue;
            case 14:
                printf("E");
                continue;
            case 15:
                printf("F");
                continue;
            default:
                break;
        }
        printf("%lld", heksa[i]);
    }
    printf("\n");
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      