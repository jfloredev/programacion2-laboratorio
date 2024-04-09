//
//  day01.cpp
//  Sesion01
//
//  Created by Juan Renato on 8/04/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void print(float cadena){
    cout << cadena << endl;
}

const float Pi = 3.1415;
double radianesHexadecimal(double radianes){
    return (radianes*Pi) * 180/Pi;
}

int  main(){
    float numero = 0;
    cout << "Ingresa numero "; cin >> numero;
    float numeroEntero = int(numero);
    float numeroDecimal = numero - numeroEntero;
    print(numeroEntero);
    print(numeroDecimal);

}


/*
 
 int main(){
 double rad = 0;
 cout << "Ingrese el numero en radianes (sin PI): ";
 cin >> rad;
 double calculo = radianesHexadecimal(rad);
 cout << "El valor en grados sexagecimales: " << calculo << endl;
 printf("El valor en grados sexagecimales: %4.2f \n", calculo);
 printf("otra vez \n") ;
 print("hello wordl");
 
 print("hello marco");
 return 0;
 }
 
 */
