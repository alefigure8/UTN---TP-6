//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int rounded(float a);

int main (void){
  float number;
  int result;

  cout << "Ingrese un numero con decimal: ";
  cin >> number;

  result = rounded(number);

  cout << endl << result << endl;

  return 0;
}

int rounded(float a){
  int entero;
  float decimal;

  entero = a / 1;
  decimal = a - entero;

  if(decimal > 0.50){
    return entero + 1;
  } else {
    return entero;
  }

}