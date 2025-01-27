# Suma de Arreglos en Paralelo con OpenMP

Este proyecto demuestra cómo realizar la suma de dos arreglos de manera paralela utilizando la librería **OpenMP** en C. Para ello, se utilizan contenedores **Docker**, de forma que no sea necesario instalar compiladores o librerías localmente.

## Descripción

1. Se generan dos arreglos (A y B) con valores aleatorios.  
2. Se realiza la suma de cada elemento de A y B en un tercer arreglo C.  
3. El bucle `for` que realiza la suma está paralelizado con **OpenMP**.

# Instrucciones de uso

Clonar este proyecto 

Asegurarse de tener Docker instalado

correr

docker build -t my-openmp-sum .

docker run --rm my-openmp-sum


Si queremos verificar que esta usando OpenMP

correr 

docker run -it sum-array-openmp /bin/bash

ldd /app/sum_array

Si observas libgomp.so o libomp.so en las dependencias, significa que el binario está utilizando la librería de OpenMP.