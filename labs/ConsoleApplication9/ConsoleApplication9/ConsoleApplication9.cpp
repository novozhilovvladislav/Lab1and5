#include "pch.h"

using namespace System;

void Task1()
{
    Console::Write(L"Enter a variant number (N):");
    int N = Int32::Parse(Console::ReadLine());
    double C = N;
    double W = N + 5; // В метрах
    double L = N + 10; // В метрах
    double CarpetPrice = W * L * C;
    Console::WriteLine(L"Room's size is {0:F2} meters x {1:F2} meters", L,
        W);
    Console::WriteLine(L"Room's area is {0:F2} square meters", L *
        W);
    Console::WriteLine(L"Carpet flooring's price is {0:F2} hryvnias", CarpetPrice);
}

void Task2()
{
    Console::WriteLine(L"Write the first string:");
    String^ str1 = Console::ReadLine();
    Console::WriteLine(L"Write the second one:");
    String^ str2 = Console::ReadLine();
    String^ str3(str1 + L" " + str2);
    Console::WriteLine(L"{0}", str3);
}

void Task3()
{
    Console::WriteLine(L"Write the first string:");
    String^ str1 = Console::ReadLine();
    Console::WriteLine(L"Write the second one:");
    String^ str2 = Console::ReadLine();
    int result(String::Compare(str1, str2));
    if (result < 0)
        Console::WriteLine(L"{0} smaller than {1}.", str1, str2);
    else if (result > 0)
        Console::WriteLine(L"{0} larger than {1}.", str1, str2);
    else
        Console::WriteLine(L"{0} equivalent to {1}.", str1, str2);
}

void Task4()
{
    Console::WriteLine(L"Write the first string:");
    String^ str = Console::ReadLine();
    str = str->Insert(0, L"begin ");
    str = str->Insert(str->Length, L" end");
    Console::WriteLine(L"New string: {0}", str);
    Console::WriteLine(L"Length of that string is {0}", str->Length);
}

void Task5()
{
    Console::WriteLine(L"Write a string:");
    String^ str = Console::ReadLine();
    String^ reversed(L"");
    for (int i = str->Length - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    Console::WriteLine(L"Reversed string: {0}", reversed);
}

void Task6()
{
    Console::WriteLine(L"Write the first string:");
    String^ str1 = Console::ReadLine();
    Console::WriteLine(L"Write the second one:");
    String^ str2 = Console::ReadLine();
    int str1Length = str1->Length;
    int str2Length = str2->Length;
    if (str1Length < str2Length)
        Console::WriteLine(L"{0} shorter than {1}.", str1, str2);
    else if (str1Length > str2Length)
        Console::WriteLine(L"{0} longer than {1}.", str1, str2);
    else
        Console::WriteLine(L"{0} equivalent to {1}.", str1, str2);
}

int main(array<System::String^>^ args)
{
    int choice = 0;
    do
    {
        Console::WriteLine(L"Task number 1");
        Console::WriteLine(L"Task number 2");
        Console::WriteLine(L"Task number 3");
        Console::WriteLine(L"Task number 4");
        Console::WriteLine(L"Task number 5");
        Console::WriteLine(L"Task number 6");
        Console::WriteLine(L"Exit (0)");
        Console::WriteLine(L"======================================");
        Console::Write(L"Choose your task: ");
        try
        {
            choice = Int32::Parse(Console::ReadLine());
            Console::WriteLine();
            switch (choice)
            {
            case 1:
                Task1();
                break;
            case 2:
                Task2();
                break;
            case 3:
                Task3();
                break;
            case 4:
                Task4();
                break;
            case 5:
                Task5();
                break;
            case 6:
                Task6();
                break;
            case 0:
                Console::WriteLine(L"Closing program..");
                break;
            default:
                Console::WriteLine(L"Not a valid number.");
                break;
            }
        }
        catch (FormatException^)
        {
            Console::WriteLine(L"Enter a number!");
            choice = -1;
        }
    } while (choice != 0);
    return 0;
}