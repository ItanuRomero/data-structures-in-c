/******************************************************************************
4)    Durante uma corrida de automóveis, com 10 voltas de duração, 
foram anotadas para apenas um piloto os tempos registrados em cada volta. 
Faça um programa em C para ler os tempos das 10 voltas, calcular e apresentar:
Melhor tempo;
A volta em que o melhor tempo ocorreu;
Tempo médio das 10 voltas;
*******************************************************************************/

#include <stdio.h>

#define LAPS 3

int main()
{
    float sum, bestLapTime, meanTime;
    float allLaps[LAPS];
    int lap = 0, bestLapNumber;
    
    while (lap < LAPS) {
        do {
            printf("Tempo da volta: ");
            scanf("%f", &allLaps[lap]);
        } while (allLaps[lap] < 0 );
        
        if (lap == 0) {
            bestLapTime = allLaps[lap];
            bestLapNumber = lap + 1;
        } else if (allLaps[lap] < bestLapTime) {
            bestLapTime = allLaps[lap];
            bestLapNumber = lap + 1;
        }
        sum = sum + allLaps[lap];
        lap++;
        
    }
    
    meanTime = sum / LAPS;
    
    printf("Melhor tempo: %f \nOcorreu na volta: %d\n", bestLapTime, bestLapNumber);
    printf("Tempo médio das voltas %f\n", meanTime);
    printf("Todas as voltas: \n");
    for (int lap = 0; lap < LAPS; lap++) {
        printf(" %f |", allLaps[lap]);
    }
    
    return 0;
}
