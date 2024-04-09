//
//  Flow-Control.cpp
//  Sesion01
//
//  Created by Juan Renato on 9/04/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void print(int numero){
    cout << numero << endl;
}
int suma(int numero1, int numero2){
    return numero1 + numero2;
}

int resta(int numero1,int numero2){
    return numero1 - numero2;
}
int  multiplicacion(int numero1,int  numero2){
    return numero1 * numero2;
}
float division(int numero1, int numero2){
    return numero1 / numero2;
}

int main(int argc, const char * argv[]){
    
    char simbolo;
    float numero1, numero2, resultado=0;
    cout << "ingresa numero1: " ; cin >> numero1;
    cout << "ingresa numero2 :" ; cin >> numero2;
    cout << "Ingresa caracater : "; cin >> simbolo ;
    
    if (simbolo == '+') {
        resultado = suma(numero1, numero2);
    }
    if (simbolo == '-') {
        resultado = resta(numero1, numero2);
    }
    if (simbolo == '*') {
        resultado = multiplicacion(numero1, numero2);
    }
    if (simbolo == '/') {
        resultado = division(numero1, numero2);
    }else{
        cout << "error pape " << endl;
    }
    
    print(resultado);
    
    return 0;
}
