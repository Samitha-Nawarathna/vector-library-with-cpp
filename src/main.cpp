#include <iostream>
#include "vec.h"

using namespace std;

int main()
{
    vec v1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    vec v2 = {2.0, 3.0, 4.0, 5.0, 6.0};
    vec v3 = v1 + v2;
    v3.display();

    return 0;
}