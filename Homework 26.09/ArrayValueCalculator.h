#pragma once
#include <string>
using namespace std;

class ArraySizeException : public exception
{
public:
    const char* what() const noexcept override;
};

class ArrayDataException : public exception
{
public:
    string message;

    ArrayDataException(string message);

    const char* what() const noexcept override;
};

class ArrayValueCalculator
{
public:
    int doCalc(string arr[4][4], int rows, int cols);
};