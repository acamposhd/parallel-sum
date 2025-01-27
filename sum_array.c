#include <stdio.h> // Entrada y salida
#include <stdlib.h> // Funciones de utilidad
#include <time.h> // Para inicializar seed de rand()
#include <omp.h> // OpenMP: Librería para programación paralela

int main() {
    // Tamaño de los arreglos (Arrays)
    int N = 1000;

    // arreglos (Arrays) de enteros
    int A[N], B[N], C[N];

    // Inicializar seed para números aleatorios
    srand(time(NULL));

    // Llenamos los arreglos (Arrays) A y B con valores aleatorios
    for(int i = 0; i < N; i++) {
        A[i] = rand() % 100; // valores entre 0 y 99
        B[i] = rand() % 100;
    }

    // Verificar el número de hilos disponibles
    #pragma omp parallel
    {
        printf("Número de hilos en uso: %d\n", omp_get_num_threads());
    }

    // Suma en paralelo usando OpenMP
    #pragma omp parallel for
    for(int i = 0; i < N; i++) {
        // Suma de los elementos de los arreglos A y B
        C[i] = A[i] + B[i];
    }


    // Imprimimos todos los resultados
    // for(int i = 0; i < N; i++) {
    //     printf("A[%d] = %d, B[%d] = %d, C[%d] = %d\n", i, A[i], i, B[i], i, C[i]);
    // }

    // Imprimimos primeros 10 resultados para verificar
    for(int i = 0; i < 10; i++) {
        printf("A[%d] = %d, B[%d] = %d, C[%d] = %d\n", i, A[i], i, B[i], i, C[i]);
    }

    return 0;
}

