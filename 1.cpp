//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

/* Funciones */
bool esPrimo (int a, int b);

int main (void){

  int numero_1, numero_2;
  bool esMultiplo;

  cout << "Ingrese el primer numero: ";
  cin >> numero_1;
  cout << "Ingrese el segundo numero: ";
  cin >> numero_2;

  esMultiplo = esPrimo(numero_1, numero_2);

  if(esMultiplo == 1){
    cout << "Son multiplos" << endl;
  } else {
    cout << "No son multiplos" << endl;
  }

}

bool esPrimo (int a, int b){
  if(a % b == 0) {
    return true;
  } else {
    return false;
  }
}