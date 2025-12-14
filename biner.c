#include <stdio.h>
#include "kalkulator.h"
#include <math.h>

int hitung_digit_biner(long long int num) {
    long long int temp = num;
    int digit;
    do{
        temp /= 10;
        ++digit;
    }while(temp != 0);

    return digit;
}

void biner(){
    long long int num;
    printf("Masukkan bilangan (biner) : ");
    scanf("%lld", &num);
    printf("\n");

    int digit = hitung_digit_biner(num);
    long long int temp = num;
    long long int result;

    for(int i = 0; i < digit; i++){
        int bil = temp % 10;
        result += bil*pow(2, i);
        temp/=10;
    }

    printf("Hasil konversi (desimal) : %lld\n\n", result);
}