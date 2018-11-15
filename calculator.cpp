#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b; //addition
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b); //substraction
}

int Calculator::Mul (double a, double b)
{
    return a * b; //multiplication
}

int Calculator::Div (double a, double b)
{
    return a / b; //division
}

int Calculator::Inc (double a)
{
    return a++; //increment
}