#include "math3d.h"

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

//VECTOR3D MultiplyWithScalar(float scalar, VECTOR3D a)
//{
//    VECTOR3D vec;
//    return vec;
//}