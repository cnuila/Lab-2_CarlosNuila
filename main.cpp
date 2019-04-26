#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>

void  Ejercicio2(int p);

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
        case 2:
            {
                int p = 0;
                while (p <= 0){
                    cout << "Ingrese un numero: ";
                    cin >> p;
                    Ejercicio2(p);
                }
            }
    }
    cout << "¿Desea volver a hacerlo[s/n]?: ";
    cin >>  respuesta;
    }
    return 0;
}


void Ejercicio2(int p){
    if (p < 6){
        cout << "No hay número perfecto menor a 6" << endl;
    } else {
        int pos = 0;
        for (int i = 1; i <= p - 1; i++){
            if (p % i == 0){
                pos++;
            }
        }
        int size = pos;
        int temp[size];
        for (int i = 0; i < size; i++)
            temp[i] = 0;
        pos = 0;
        for (int i = 1; i <= p - 1; i++){
            if (p % i == 0){
                temp[pos] = i;
                pos++;
            }
        }
        int suma = 0;
        for (int i = 0; i < size; i++){
            if (temp[i] != 0){
                suma+= temp[i];
            } else {
                i = size;
            }
        }
        if (suma == p){
            cout << "El numero es perfecto" <<endl;
            for (int i = 0; i < pos; i++){
                if (i != pos - 1){
                    cout <<  temp[i] << " + ";
                } else {
                    cout << temp[i] << " = ";
                }
            }
            cout << suma << endl;
        }
        /*for (int i = 0; i < 5; i++){
            cout << "temp[" << i << "]= " << temp[i] << endl;
        }*/
    }
}

