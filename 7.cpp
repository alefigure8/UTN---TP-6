//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios: Hacer una función que reciba un vector de números enteros y su tamaño y devuelva la posición en donde se encuentra el valor máximo del vector

#include <iostream>
using namespace std;

/* Funciones */
int buscarMaximo(int * a, int cantidad);

int main (void){
  const int cantidad = 10;
  int numeros[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    cin >> numeros[i];
  }

  int posicion;
  posicion = buscarMaximo(numeros, cantidad);

  cout << "La posicion es " << posicion << " y el numero es " << numeros[posicion] << endl;

  return 0;
}

/* Funcion que busca el numero maximo de un vector y retorna la posicion */
int buscarMaximo(int * a, int cantidad){
  int max = a[0];
  int posicion;

  for (int i = 0; i < cantidad; i++)
  {
    if(a[i] > max){
      max = a[i];
      posicion = i;
    }
  }
  return posicion;
}
