#include "stdafx.h"
#include "Ejercicio1.h"
#include "common.h"


//Utiliza las funciones anteriores para obtener el número entero en base10 correspondiente 
// al número 1010 base 2. ¿A qué número corresponde en base10 ?

void ejercicio1()
{
    printf("\nEjercicio 1");
    int base10 = intFromBinary("1010");
    printf("\nCorresponde al numero %d", base10);
    printf("\n------------\n");
}