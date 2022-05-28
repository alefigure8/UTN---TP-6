//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

bool buscarNumero (int buscar, int * vector, int cantidad);

int main (void){

  const int cantidad = 10;
  int numeros[cantidad] = {};
  int buscar;
  bool resultado;

  for (int i = 0; i < cantidad; i++){
    cout << "Ingrese un numero: ";
    cin >> numeros[i];
  }

  cout << endl << "Ingrese el numero que quiere buscar: ";
  cin >> buscar;

 resultado = buscarNumero(buscar, numeros, cantidad);

  if(resultado == true){
    cout << "El numero que busca se encuentra en el vector" << endl;
  } else {
    cout << "El numero que busca no se encuentra en el vectos" << endl;
  }

  return 0;
}

bool buscarNumero (int buscar, int * vector, int cantidad){
  bool estaNumero = 0;

  for (int i = 0; i < cantidad; i++){
    if(vector[i] == buscar){
      estaNumero = 1;
    }
  }

  if(estaNumero == true){
    return true;
  } else {
    return false;
  }
}
