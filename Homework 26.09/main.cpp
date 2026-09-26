#include <iostream>
#include "ArrayValueCalculator.h"
using namespace std;

int main()
{
    string arr[4][4] =
    {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "10", "11", "12"},
        {"13", "14", "15", "16"}
    };

    ArrayValueCalculator calculator;

    try
    {
        cout << calculator.doCalc(arr, 4, 4) << endl;
    }
    catch (ArraySizeException& e)
    {
        cout << e.what() << endl;
    }
    catch (ArrayDataException& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}