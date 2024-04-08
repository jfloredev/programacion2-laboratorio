//
//  main.cpp
//  Sesion01
//
//  Created by Juan Renato on 3/04/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    //if - condicional
    int numero1, numero2;
    int n=2;
    cout << "Ingresa numero1" ; cin >> numero1;
    cout << "Ingresa numero2" ; cin >> numero2;
    
    while (n <= numero1 and numero2 ) {
        
        if (n%numero1 == 0 and n%numero2 == 0) {
            numero1 /=n;
            numero2 /=n;
        } else{
            n++;
        }
        
    }

    return 0;
}


/*
 bool valor = true; //1BITS
 char letra = 'c'; //1BITS
 int numero = 10;   //4 BITS
 float decimal = 10.312; //4BITS
 double decimalBig = 2012.123123; //8BITS
 string cadena = "Juan Renato Flores"; //32 BITS
 */

/*
 
 for (int i= 1 ; i< 30 ; i++) {
   
     if (i%3 == 0) {
         cout << i << "Multiplo de 3"<< endl;
     }
     if (i%4 == 0) {
         cout << i << "Multiplo de 4" << endl;
     }
     if (i%12 == 0) {
         cout << i << "Multiplo de 3 y 4 " << endl;
     }
 }
 */
