//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

bool esPrimo(int a);

int main (void){

  int numero;
  bool resultado;

  cout << "Ingrese un numero para saber si es primo: ";
  cin >> numero;

 resultado = esPrimo(numero);

 if(resultado == 1){
   cout << "El numero " << numero << " es primo" << endl;
 } else {
   cout << "El numero " << numero << " no es primo" << endl;
 }


  return 0;
}

bool esPrimo(int a){

  int cont = 0;

  for (int i = 1; i <= a; i++){

    if(a % i == 0){
      cont++;
    }

  }

  if(cont == 2){
    return true;
  } else {
    return false;
  }
}