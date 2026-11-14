#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::Write("Input N:  ");
    int N = Int32::Parse(Console::ReadLine());

    array<double>^ A = gcnew array<double>(2 * N);
    array<double>^ B = gcnew array<double>(N);

    Console::WriteLine("\nInput array A");
    for (int i = 0; i < N; i++)
    {
        Console::Write("A[{0}] (water): ", 2 * i + 1);
        A[2 * i] = Convert::ToDouble(Console::ReadLine());

        Console::Write("A[{0}] (ether): ", 2 * i + 2);
        A[2 * i + 1] = Convert::ToDouble(Console::ReadLine());
    }

    for (int i = 0; i < N; i++)
    {
        double avg = (A[2 * i] + A[2 * i + 1]) / 2.0;
        B[i] = avg / 4.0;
    }

    Console::WriteLine("\nResults");
    for (int i = 0; i < N; i++)
    {
        Console::Write("{0,8:F4} ", B[i]);
    }

    Console::ReadKey();
    return 0;
}
