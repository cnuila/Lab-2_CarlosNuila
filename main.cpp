#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>

int main(){
    char respuesta = 'S';
    while (respuesta == 'S' || respuesta == 's'){
    int opcion = 0;
    while(opcion <= 0 || opcion > 4){
        cout << "Menu" <<endl
        << "1)Ejercicio 1" <<endl
        << "2)Ejercicio 2" <<endl
        << "3)Ejercicio 3" <<endl
        << "4)Salir" <<endl
        << "Ingrese su opcion: ";
        cin >> opcion;
    }
    switch (opcion){
        case 1:
            {

                break;
            }
    }
    cout << "¿Desea volver a hacerlo[s/n]?: ";
    cin >>  respuesta;
    }
    return 0;
}
