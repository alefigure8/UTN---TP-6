//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios: Hacer una función que reciba un un vector de cadenas de caracteres y devuelva la cantidad de caracteres del mismo hasta el '\0'. Asumir que el vector  ispone de un '\0'.

#include <iostream>
using namespace std;

int contarChar(char a[20]);

int main (void){

  char palabra[20];

  cout << "Escriba una palabra: ";
  cin >> palabra;

  cout << contarChar(palabra);

  return 0;
}

int contarChar(char a[20]){
  int count = 0;
  for (int i = 0; i < 20; i++)
  {
    if(a[i] == '\0'){
      i = 20;
    } else {
      count++;
    }
  }
  return count;
}