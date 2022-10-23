#include "taylor_sine.h"
#include <stdbool.h>  //bool
#include <stdio.h> //printf
#include <math.h> //pow, factorial

double factorial(double num)
{

    double res = 1;
    for (int i = 1; i < num + 1; i++)
    {
        res *= i; //res bliver ganget med i og erstattet med resultatet
    }
    return res;
}

bool check_pre(double num, double num2, int n)
{
    double pre = pow(10, -n); //pre bliver til 10^-n

    if (fabs(num - num2) > pre) //tager det absolute værdi til tallet
    {
        return true;
    }
    else
    {
        return false;
    }
}

double taylor_sine(double x, int n)
{
    int i;
    double result = x;
    double old = 0;

    for (i = 1; check_pre(result, old, n); i++)
    {
        old = result;
        if (i % 2 == 1)
            result -= (pow(x, 2 * i + 1) / factorial(2 * i + 1));
        if (i % 2 == 0)
            result += (pow(x, 2 * i + 1) / factorial(2 * i + 1));  //sin(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7!...
    }
    printf("%d, ",i);
    return result;
}