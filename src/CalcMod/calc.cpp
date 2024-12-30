#include "calc.h"
#include "SubCalc/subcalc.h"

int Calc::Sum(int a, int b, bool bSub)
{
    if (!bSub)
        return a + b;
    else
        return SubCalc::Subtract(a, b);
}