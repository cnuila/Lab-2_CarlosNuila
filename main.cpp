#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<string>

void  Ejercicio2(int numero);

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
                int numero = 0;
                while (numero <= 0){
                    cout << "Ingrese un numero: ";
                    cin >> numero;
                    Ejercicio2(numero);
                }
            }
    }
    cout << "¿Desea volver a hacerlo[s/n]?: ";
    cin >>  respuesta;
    }
    return 0;
}


void Ejercicio2(int numero){
    if (numero < 6){
        cout << "No hay número perfecto menor a 6" << endl;
    } else {
        int pos = 0;
        for (int i = 1; i <= numero - 1; i++){
            if (numero % i == 0){
                pos++;
            }
        }
        int size = pos;
        int temp[size];
        for (int i = 0; i < size; i++)
            temp[i] = 0;
        pos = 0;
        for (int i = 1; i <= numero - 1; i++){
            if (numero % i == 0){
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
        if (suma == numero){
            cout << "El numero es perfecto" <<endl;
            for (int i = 0; i < pos; i++){
                if (i != pos - 1){
                    cout <<  temp[i] << " + ";
                } else {
                    cout << temp[i] << " = ";
                }
            }
            cout << suma << endl;
        } else {
            cout << "El numero ingresado no es perfecto" << endl;
            int pos2 = 0;
            for (int i = numero; i >= 1; i--){
                pos2 = 0; 
                for (int j = 1; j <= i - 1; j++){
                    if (i % j == 0){
                        pos2++;
                    }
                }
                size = pos2;
                int temp2[size];
                for (int j = 0; j < size; j++)
                    temp2[j] = 0;
                pos2 = 0;
                for (int j = 1; j  <= i - 1; j++){
                    if (i % j == 0){
                        temp2[pos2] = j;
                        pos2++;
                    }
                }
                suma = 0;
                for (int j  = 0; j < size; j++){
                    suma+= temp2[j];
                }
                if (suma == i){
                    cout << "El numero perfecto mas cercano es " << suma <<endl;
                    for (int j = 0; j < size; j++){
                        if (j != size - 1){
                            cout <<  temp2[j] << " + ";
                        } else {
                            cout << temp2[j] << " = ";
                        }
                    }
                    cout << suma << endl;
                    i = 0;
                }
            }
        }
    }
}

