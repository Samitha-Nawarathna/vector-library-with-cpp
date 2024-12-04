#include "vec.h"

vec operator+(const vec& v1, const vec& v2)
{
    vec out = v1;
    out += v2;

    return out;
}

vec operator-(const vec& v1, const vec& v2)
{
    vec out = v1;
    out -= v2;

    return out;
}

double dot(const vec& v1, const vec& v2)
{
    double out = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        out += v1[i]*v2[i];
    }

    return out;
}