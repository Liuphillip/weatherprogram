#include <stdio.h>

#define MONTHS 12
#define YEARS 5


int main(int argc, char **argv)
{
	int rain[YEARS][MONTHS] = 
    {
        {1, 5, 8, 2, 10, 0, 3, 7, 4, 9, 6, 2},
        {0, 3, 9, 1, 4, 8, 10, 5, 2, 7, 3, 6},
        {7, 2, 4, 10, 5, 1, 8, 0, 9, 3, 6, 4},
        {5, 8, 1, 0, 3, 9, 2, 6, 10, 4, 7, 1},
        {2, 10, 6, 4, 7, 3, 5, 1, 0, 8, 9, 5}
    };
    
    float yearAverage [YEARS];
    float yearSum = 0.0;
    
    for(int i=0; i < YEARS; i++){
        for(int j=0; j < MONTHS; j++){
            yearSum += rain[i][j];
        }
        yearAverage[i] = (float)yearSum  / MONTHS;
        yearSum = 0;
    }
    
    for(int i=0; i < YEARS; i++){
        printf("%f, ", yearAverage[i]);
    }
    
	return 0;
}
