#include <iostream>
#include "vector.h"
#include "TIME.h"
#include "object.h"
#include "TRIAD.h"

int main()
{
    vector Ob(2);
    TRIAD A;
    cin >> A;
    TIME B;
    cin >> B;
    B.set();
    object* p = &A;
    Ob.pushback(p);
    p = &B;
    Ob.pushback(p);
    cout << Ob;
}