#include <iostream>
#include <string>

using namespace std;

string productos[5][3] = {
    {"001", "iPhone xPlus", "0"}, 
    {"002", "Laptop Dell Latitude", "5"},
    {"003", "Monitor LG QLed", "2"},
    {"004", "Mouse optico Ergonomic", "100"},
    {"005", "Headset bits", "25"},
};

void listarProductos(){
    system ("cls");
    cout << endl;
    cout << "***************ZavMur***************" << endl;
    cout << "*       Listado de Productos       *" << endl;
    cout << "***************ZavMur***************" << endl;
    cout << "***************ZavMur***************" << endl;
    cout << "* Codigo, Descripcion y existencia *" << endl;
    cout << "***************ZavMur***************" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << productos[i][0] << " | " << productos[i][1]<< " | " << productos[i][2] << endl;
    }  
}

void movimientoInventario(string codigo, int cantidad, string tipoMovimiento){
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo){
            if (tipoMovimiento == "+"){
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
            } else {
                productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
        }
    }
}
void ingresoDeInventario(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "****************ZavMur****************" << endl;
    cout << "* Ingreso de Productos al Inventario *" << endl;
    cout << "****************ZavMur****************" << endl;
    cout << "Ingrese el codigo del producoto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto:  ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, "+");
}
void salidaDeInventario(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "****************ZavMur***************" << endl;
    cout << "* Salida de Productos al Inventario *" << endl;
    cout << "****************ZavMur***************" << endl;
    cout << "Ingrese el codigo del producoto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto:  ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, "-");
}
void transferenciaDeProductoRecivido(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "*****************ZavMur*****************" << endl;
    cout << "* Transferencia De Productos Recividos *" << endl;
    cout << "*****************ZavMur*****************" << endl;
    cout << "Ingrese el codigo del producoto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto:  ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, "+");
}
void trasferenciaDeProductosEnviados(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "****************ZavMur****************" << endl;
    cout << "* Trasferencia De Productos Enviados *" << endl;
    cout << "****************ZavMur****************" << endl;
    cout << "Ingrese el codigo del producoto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto:  ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, "-");
}

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true) {
        system ("cls");

        cout << endl;
        cout << "*********ZavMur*********" << endl;
        cout << "* Software of Inv3ntry *" << endl;
        cout << "*********ZavMur*********" << endl;
        cout << endl;
        cout << "1 - Productos" << endl;
        cout << "2 - Entrada de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Transferencia de Productos Recividos de Tienda Norte" << endl;
        cout << "5 - Transferencia de Productos Enviados a Tienda Norte" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
            listarProductos();            
            break;
        case 2:
            ingresoDeInventario();
            break;
        case 3:
            salidaDeInventario();
            break;
        case 4:
            transferenciaDeProductoRecivido();
            break;
        case 5:
            trasferenciaDeProductosEnviados();
            break;        
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