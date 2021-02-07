#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota < 0)
    { 
        cout << "Ingrese una nota entre 0 - 100";
        return 0;
    }

    if (nota >= 95 && nota <= 100)
    {
        cout << "obtuviste una A++";
    }
    
    if (nota >= 90 && nota <= 94)
    {
        cout << "obtuviste una A+";
    }
    
    if (nota >= 85 && nota <= 94)
    {
        cout << "obtuviste una A-";
    }

    if (nota >= 80 && nota <= 84)
    {
        cout << "obtuviste una B+";
    }

    if (nota >= 75 && nota <= 79)
    {
        cout << "obtuviste una B";
    }

    if (nota >= 70 && nota <= 74)
    {
        cout << "obtuviste una B-";
    }
    
    if (nota >= 65 && nota <= 69)
    {
        cout << "obtuviste una C+";
    }
    
    if (nota >= 60 && nota <= 64)
    {
        cout << "obtuviste una C";
    }
    
    if (nota >= 55 && nota <= 59)
    {
        cout << "obtuviste una C-";
    }
    
    if (nota >= 50 && nota <= 54)
    {
        cout << "obtuviste una D+";
    }
    
    if (nota >= 45 && nota <= 49)
    {
        cout << "obtuviste una D";
    }
    
    if (nota >= 40 && nota <= 44)
    {
        cout << "obtuviste una D-";
    }
    
    if (nota >= 35 && nota <= 39)
    {
        cout << "obtuviste una E+";
    }
    
    if (nota >= 30 && nota <= 34)
    {
        cout << "obtuviste una E";
    }
    
    if (nota >= 25 && nota <= 29)
    {
        cout << "obtuviste una E-";
    }
    
    if (nota >= 20 && nota <= 24)
    {
        cout << "obtuviste una F+";
    }
    
    if (nota >= 15 && nota <= 19)
    {
        cout << "obtuviste una F";
    }
    
    if (nota >= 10 && nota <= 14)
    {
        cout << "obtuviste una F";
    }
    
    if (nota >= 5 && nota <= 9)
    {
        cout << "obtuviste una F-";
    }
    
    if (nota >= 0 && nota <= 5)
    {
        cout << "obtuviste una F--";
    }
    
    return 0;
}
