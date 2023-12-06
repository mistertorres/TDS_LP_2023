#include <stdio.h>

int main()
{
    int resultado[11];
    int totalDaSoma = 0;

    // primeiro for é responsavel por criar o total de tabuadas
    for (int i = 1; i <= 10; i++)
    {
        // calcula total por tabuada

        resultado[i] = 0;

        // segundo for é responsavel por criar as tabuadas individuais
        for (int j = 1; j <= 10; j++)
        {
            // calcula total por tabuada
            resultado[i] = resultado[i] + (i * j);
            // calcula o total de todas as tabuadas
            totalDaSoma = totalDaSoma + (i * j);
            printf("\n %d X %d = %d", i, j, i * j);
        }

        printf("\n - - resultado total das tabuadas %d: (%d) ", i, resultado[i]);
    }
    
    printf("\n o total da soma das tabuadas he: %d \n", totalDaSoma);

    return 0;
}