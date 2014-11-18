#include "stdafx.h"
#include "common.h"

int intFromBinary(const std::string &number)
{
    int tam = number.length();
    int aux = 0;

    for (unsigned int i = 0; i < (tam); i++)
    {            
        aux = aux << 1;
        if (number[i] == '1')         aux++;
    }
    
    return aux;
}

std::string binaryFromInt(int x)
{
    std::string str = "";
    int aux = x;
    while (aux % 2 != 0)
    {
        aux = aux / 2;
        str += '1';

    }
    return str;
}


void printIntAsBinary(int x)
{
    std::string str = binaryFromInt(x);
    printf("%s\n", str.c_str());
}