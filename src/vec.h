#ifndef _VEC_H_
#define _VEC_H_

#include <iostream>
#include <vector>

using namespace std;

class vec
{
public:
    vector<double> ets;

    vec(const initializer_list<double>& list) : ets(list) {}

    void display()
    const {
        cout << "[ ";

        for(const double& val : ets)
        {
            cout << val << ", ";
        }

        cout << "]" << endl;
    }

    int size()
    const {
        return ets.size();
    }

    double operator[](int i)
    const {
        return ets[i];
    }

    vec& operator+=(const vec& v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            ets[i] += v[i];

        }

        return *this;
    }

    vec& operator-=(const vec& v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            ets[i] -= v[i];

        }

        return *this;
    }

    vec& operator*=(double t)
    {
        for (int i = 0; i < this->size(); i++)
        {
            ets[i] *= t;

        }

        return *this;        
    }

    vec& operator/=(double t)
    {
        for (int i = 0; i < this->size(); i++)
        {
            ets[i] /= t;

        }

        return *this;        
    }

    double length()
    {
        double len =  0;

        for (const double& val : ets)
        {
            len += val*val;

        }

        return len;
    }

    vec& normalize()
    {
        double len = this->length();

        for (int i = 0; i < this->size(); i++)
        {
            ets[i] /= len;

        }

        return *this;         
    }

    vec& norm()
    const {
        vec norm = *this;

        return norm.normalize();
    }    
};

vec operator+(const vec& v1, const vec& v2);
vec operator-(const vec& v1, const vec& v2);
double dot(const vec& v1, const vec& v2);

#endif //_VEC_H_