#include "math3d.h"
#include <math.h>  

VECTOR3D Add(VECTOR3D a, VECTOR3D b)
{
    VECTOR3D ret;
    ret.x = a.x + b.x;
    ret.y = a.y + b.y;
    ret.z = a.z + b.z;
    return ret;
}


VECTOR3D Substract(VECTOR3D a, VECTOR3D b)
{
    VECTOR3D vec;
    vec.x = a.x - b.x;
    vec.y = a.y - b.y;
    vec.z = a.z - b.z;
    return vec;
}

VECTOR3D Multiply(VECTOR3D a, VECTOR3D b)
{
    VECTOR3D vec;
    vec.x = a.x * b.x;
    vec.y = a.y * b.y;
    vec.z = a.z * b.z;
    return vec;
}

VECTOR3D MultiplyWithScalar(float scalar, VECTOR3D a)
{
    VECTOR3D vec;
    vec.x = a.x * scalar;
    vec.y = a.y * scalar;
    vec.z = a.z * scalar;
    return vec;
}

double Magnitude(VECTOR3D a)
{
    double magnitud = 0;
    magnitud = magnitud + (a.x * a.x);
    magnitud = magnitud + (a.y * a.y);
    magnitud = magnitud + (a.z * a.z);
    return sqrt(magnitud);
}

VECTOR3D Normalize(VECTOR3D a)
{
    VECTOR3D vec;
    double magnitud = Magnitude(a);
    vec.x = a.x / magnitud;
    vec.y = a.y / magnitud;
    vec.z = a.z / magnitud;
    return vec;
}

VECTOR3D CrossProduct(VECTOR3D a, VECTOR3D b)
{
    VECTOR3D vec;
    vec.x = (a.y * b.z) - (b.y * a.z);
    vec.y = (a.z * b.x) - (b.z * a.x);
    vec.z = (a.x * b.y) - (b.x * a.y);
    return vec;
}

double DotProduct(VECTOR3D a, VECTOR3D b)
{
    double escalar = 0;
    escalar = escalar + ( a.x * b.x);
    escalar = escalar + (a.y * b.y);
    escalar = escalar + (a.z * b.z);
    return escalar;
}

MATRIX3 Transpose(MATRIX3 m)
{
    MATRIX3 mat;
    mat.column0.x = m.column0.x;
    mat.column0.y = m.column1.x;
    mat.column0.z = m.column2.x;

    mat.column1.x = m.column0.y;
    mat.column1.y = m.column1.y;
    mat.column1.z = m.column2.y;

    mat.column2.x = m.column0.z;
    mat.column2.y = m.column1.z;
    mat.column2.z = m.column2.z;
    return mat;
}

VECTOR3D Transform(MATRIX3 m, VECTOR3D a)
{
    VECTOR3D vec;
    return vec;
}

MATRIX4 InverseOrthogonalMatrix(MATRIX3 A, VECTOR3D t)
{
    MATRIX4 matr;
    return matr;
}
