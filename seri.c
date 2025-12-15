#include <stdio.h>
#include "kalkulator.h"

void seri(){

    int num = 0;
    float result = 0;

    printf("Jumlah resistor : ");
    scanf("%d", &num);

    float res[num];

    for(int i = 1; i <= num; i++){
        
        printf("Resistor Magnitude %d (ohm): ", i);
        scanf("%f", &res[i-1]);

    }

    for(int i = 0; i < num; i++){
        result += res[i];
    }

    printf("\n");
    printf("Resistor Equivalent : %.3f ohm\n ", result);
    printf("\n");
}