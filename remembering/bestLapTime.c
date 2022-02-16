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
    float sum, lapTime, bestLapTime, meanTime;
    int lap = 0, bestLapNumber;
    
    while (lap < LAPS) {
        do {
            printf("Tempo da volta: ");
            scanf("%f", &lapTime);
        } while (lapTime < 0 );
        if (lap == 0) {
            bestLapTime = lapTime;
            bestLapNumber = lap + 1;
        } else if (lapTime < bestLapTime) {
            bestLapTime = lapTime;
            bestLapNumber = lap + 1;
        }
        sum = sum + lapTime;
        lap++;
    }
    
    meanTime = sum / LAPS;
    
    printf("Melhor tempo: %f | Ocorreu na volta: %d\n", bestLapTime, bestLapNumber);
    printf("Tempo médio das voltas %f", meanTime);
    
    return 0;
}
