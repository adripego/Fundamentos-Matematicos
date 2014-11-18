#include "stdafx.h"
#include "common.h"
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include "Ejercicio3.h"


int _tmain(int argc, _TCHAR* argv[])
{
    int a = intFromBinary("1111");
    //printIntAsBinary(a);
    printf("\nIntFromBinary: %d\n",a);

    std::string str = binaryFromInt(15);
    printf("\nBinaryFromInt: %s\n", str.c_str());
    printf("***************************************************");
    
    ejercicio1();

    ejercicio2a();
    ejercicio2b();
    ejercicio2c();

    ejercicio3();

    getchar();


    return 0;
}

