//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

void cargar(int *a, int cant);
void mostrar(int *a, int cant);

int main (void){
  const int cant = 10;
  int numeros[cant];

  cargar(numeros, cant);
  mostrar(numeros, cant);

  return 0;
}

void cargar(int *a, int cant){
  srand(time(0));
  for (int i = 0; i < cant; i++){
    a[i] = rand() % 100 + 1;
  }
}

void mostrar(int *a, int cant){
  for (int i = 0; i < cant; i++){
    cout << a[i] << endl;
  }
}

