#include "stdafx.h"
#include "Ejercicio3.h"
#include "common.h"


//Utiliza las funciones anteriores para obtener el número entero en base10 correspondiente 
// al número 1010 base 2. ¿A qué número corresponde en base10 ?

void ejercicio3()
{
    printf("\nEjercicio 3");
    printf("\n------------\n");
    // Al hacer la raíz cuadrada de -1.
    int raiz = -1;
    printf("Raiz cuadrada de -1 es: %d", sqrt(raiz));

    // Al dividir 0 (int) entre int zero = 0;
    int zero = 0;
    printf("Dividir 0 entre int 0 es: %d", (0 / zero));

    // Al dividir 1.0f entre 0.0f.
    int f1 = 1.0f;
    int f2 = 0.0f;
    printf("Dividir 1.0f entre 0.0f: %d\n", (f1/f2));
}