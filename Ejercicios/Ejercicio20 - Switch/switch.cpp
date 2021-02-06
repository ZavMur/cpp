#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion =0;

    cout <<"Ingrese una opcion";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
    cout << "Escogiste 1" << endl;
    cout << "Segunda linea opcion 1"<< endl;
    break;
    }
    case 2:
    cout << "Escogiste 2" << endl;
    break;
    case 3:
    cout << "Escogiste 3" << endl;
    break;
    default:
        cout << "Ingrese una opcion entre 1 y 3" << endl;
        break;
    }    

    return 0;
}
