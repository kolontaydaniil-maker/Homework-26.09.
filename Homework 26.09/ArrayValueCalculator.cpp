#include "ArrayValueCalculator.h"
#include <stdexcept>

const char* ArraySizeException::what() const noexcept
{
    return "Wrong array size!";
}

ArrayDataException::ArrayDataException(string message)
{
    this->message = message;
}

const char* ArrayDataException::what() const noexcept
{
    return message.c_str();
}

int ArrayValueCalculator::doCalc(string arr[4][4], int rows, int cols)
{
    if (rows != 4 || cols != 4)
        throw ArraySizeException();

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            try
            {
                sum += stoi(arr[i][j]);
            }
            catch (...)
            {
                throw ArrayDataException(
                    "Wrong data in cell [" +
                    to_string(i) + "][" +
                    to_string(j) + "]"
                );
            }
        }
    }

    return sum;
}