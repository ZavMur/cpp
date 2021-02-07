#include <iostream>

using namespace std;

string productos[5][2] = {
    {"001", "iPhone xPlus"},
    {"001", "Laptop Dell Latitude"},
    {"001", "Monitor LG QLed"},
    {"001", "Mouse optico Ergonomic"},
    {"001", "Headset bits"},
};


int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        system ("cls");

        cout << "Software of Inv3ntry";
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout << "1 - Productos" << endl;
        cout << "2 - Entrada de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: {
            cout << "Elegiste 1";
            break;
        }
        case 2:{
            cout << "Elegiste 2";
            break;
        }
        case 3:{
            cout << "Elegiste 3";
            break;
        }

        default:
            break;
        }

        system ("pause");
        cout << endl;

        if (opcion == 0)
        {
            break;
        }
        

        }
    
    

    return 0;
}
