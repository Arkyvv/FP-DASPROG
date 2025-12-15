#include <stdio.h>
#include "kalkulator.h"

void paralel(){
    int num = 0;
    float temp_result = 0;
    float result = 0;


    printf("Jumlah Resistor :  ");
    scanf("%d", &num);

    float res [num];

    for(int i = 1; i <= num; i++){

        printf("Resistor Magnitude %d (ohm): ", i);
        scanf("%f", &res[i-1]);

    }

    for(int i = 0; i < num; i++){

        temp_result += (1/res[i]);

    }

    result = 1/temp_result;

    printf("\n");
    printf("Resistor Equivalent : %.3f ohm\n", result);
    printf("\n");

}