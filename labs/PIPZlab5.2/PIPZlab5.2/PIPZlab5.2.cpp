#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    int rows = 0;
    int cols = 0;

    Console::Write(L"Input count of rows: ");
    rows = Convert::ToInt32(Console::ReadLine());

    Console::Write(L"Input count of columns: ");
    cols = Convert::ToInt32(Console::ReadLine());

    if (rows <= 0 || cols <= 0)
    {
        Console::WriteLine(L"Size of matrix must be larger than 0!");
        return 0;
    }
    array<double, 2>^ matrix = gcnew array<double, 2>(rows, cols);

    Console::WriteLine(L"\nInput elements: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Console::Write(L"Element [{0}, {1}]: ", i, j);
            matrix[i, j] = Convert::ToDouble(Console::ReadLine());
        }
    }
    Console::WriteLine(L"\nFirst matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Console::Write(L"{0,8:F2} ", matrix[i, j]);
        }
        Console::WriteLine();
    }
    double minElem = matrix[0, 0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i, j] < minElem)
            {
                minElem = matrix[i, j];
            }
        }
    }

    Console::WriteLine(L"\nMinElement of matrix {0:F2}\n", minElem);

    Console::WriteLine(L"New matrix:");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i, j] /= minElem;
            Console::Write(L"{0,8:F2} ", matrix[i, j]);
        }
        Console::WriteLine();
    }
    return 0;
}