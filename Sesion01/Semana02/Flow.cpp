//
//  Flow.cpp
//  Sesion01
//
//  Created by Juan Renato on 9/04/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void print(string cadena , int numero){
    cout << cadena << numero << endl;
}
int main(){

    int numero;
    int contador=-1;
    int contadorPar=0;
    int contadorImpar=0;
    do {
        cout << "Ingresa numero : "; cin >> numero ;
        contador++;
        
        if (numero % 2) {
            contadorPar++;
        }
        if (numero %2 !=0){
            contadorImpar++;
        }
    } while (numero != 0);
    
    print("total de numero : ",contador);
    print("Numero par: ",contadorPar);
    print("Numero impar: ",contadorImpar);
    
    return 0;
}
