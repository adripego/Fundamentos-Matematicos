#include "stdafx.h"
#include "Ejercicio2.h"
#include "common.h"

// 2.1 Aplícale el operador NOT (~). Indica los número en base2 y base10 antes y después 
// del operador.Usa la función binaryFromInt y printf.

// 2.2 Aplícale el operador << con varios parámetros (p.ej. <<1, <<2, <<5, <<6). Imprime 
// el resultado en binario.

// 2.3 Obtén un entero con signo y sin signo a partir del número de 32 bits con todos los bits 
// a uno.Utiliza la función intFromBinary con “111…1”.Imprime el valor del numero
// entero int y unsigned obtenido mediante :

int entero = intFromBinary("1010");

#define MASCARA_RED = 0xFF0000
#define MASCARA_GREEN = 0x00FF00
#define MASCARA_BLUE = 0x0000FF

void ejercicio2a()
{
    printf("Ejercicio 2.1\n");
    entero = ~entero;
    //std::string str = binaryFromInt(entero);
    //printf("\nBinario: %s\n", str.c_str());
    printf("\nBinario:");
    printIntAsBinary(entero);
    printf("\nEntero: %d",entero);
    printf("\n-------------");
}

void ejercicio2b()
{
    printf("\nEjercicio 2.2\n");
    printIntAsBinary(entero); 
    entero = entero << 1;
    std::string str = binaryFromInt(entero);
    printf("\nUn desplazamiento: %s\n", str.c_str());
    entero = entero << 2;
    str = binaryFromInt(entero);
    printf("\nDos desplazamientos: %s\n", str.c_str());
    entero = entero << 5;
    str = binaryFromInt(entero);
    printf("\nCinco desplazamientos: %s\n", str.c_str());
    entero = entero << 6;
    str = binaryFromInt(entero);
    printf("\nSeis desplazamientos: %s\n", str.c_str());
    printf("\n-------------");
}

void ejercicio2c()
{
    printf("\nEjercicio 2.3\n"); 
    printf("\n-------------");
    int number = intFromBinary("11111111111111111111111111111111");
    unsigned int unsignedNumber = intFromBinary("11111111111111111111111111111111");

    printf("signed=%d\n", number);
    printf("unsigned = %d\n",unsignedNumber);

    number = number << 1;
    printf("signed con desplazamiento izq =%d\n", number);

    number = number >> 1;
    printf("signed con desplazamiento der =%d\n", number);

    unsignedNumber = unsignedNumber << 1;
    printf("unsigned con desplazamiento izq= %d\n", unsignedNumber);

    unsignedNumber = unsignedNumber >> 1;
    printf("unsigned con desplazamiento der= %d\n", unsignedNumber);


    int pink = 0xCC6699;
    int red = 0;
    //red = pink & MASCARA_RED;
    printf("Rojo: %x\n",red);
    
}