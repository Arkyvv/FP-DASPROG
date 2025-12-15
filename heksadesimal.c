#include <stdio.h>
#include "kalkulator.h"
#include <math.h>
#include <ctype.h>

int hitung_digit_heksadesimal(char c[]) {
    int digit = 0;
    for(int i = 0; c[i] != '\0'; i++){
        if(!isspace(c[i])){
            ++digit;
        }
    }
    return digit;
}

void heksadesimal(){
    char num[50];
    printf("Masukkan bilangan (heksadesimal) : ");
    scanf("%s", num);

    int digit = hitung_digit_heksadesimal(num);
    int result = 0;

    for(int i = digit-1,j = 0; i >= 0; i--,j++){
        switch(num[i]){
            case 'A':
                result += 10*pow(16,j);
                continue;
            case 'B':
                result += 11*pow(16,j);
                continue;
            case 'C':
                result += 12*pow(16,j);
                continue;
            case 'D':
                result += 13*pow(16,j);
                continue;
            case 'E':
                result += 14*pow(16,j);
                continue;
            case 'F':
                result += 15*pow(16,j);
                continue;
            default:
                break;
        }
        int bil = num[i] - '0';
        result += bil*pow(16,j);
        
    }
    printf("Hasil Konversi (desimal) : %d\n\n:",result);
}
