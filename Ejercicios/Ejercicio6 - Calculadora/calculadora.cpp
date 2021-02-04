#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada
    int a = 0;
    int b = 0;
    int suma=0, resta=0, multiplicacion=0, divicion=0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout<<endl;

    //proceso
    suma = a +b;
    resta = a-b;
    multiplicacion = a*b;
    divicion = a/b;

    //salida
    cout << "LA suma de a + b es: " << suma<< endl;
    cout << "LA resta de a + b es: " << resta<< endl;
    cout << "LA multiplicacion de a + b es: " << multiplicacion<< endl;
    cout << "LA divicion de a + b es: " << divicion<< endl;

    return 0;
}