#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0, impares = 0, total = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }
        
        cout << i << " ";
    }
    
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 1 == 0)
        {
            impares = impares + i;
        }
        
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0 + i % 1 == 0)
        {
            total = total + i;
        }
        
        cout << i << " ";
    }


    cout << endl;
    cout << endl;
    
    cout << "Pares = " << pares;
    
    cout << endl;
    cout << endl;
    
    cout << "Impares = " << total;    
    
    cout << endl;
    cout << endl;

    
    cout << "Total = " << impares;    

    return 0;
}
// Encontre un error, pero no lo cambie, queria que fuera
// un reto jajaja espero lo encuentre y vean lo que hice
// jajaja XD