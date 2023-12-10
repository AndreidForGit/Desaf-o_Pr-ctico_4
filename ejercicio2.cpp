#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main () {
  
  int base, potencia, limite;
  vector < int > vector_potencias;
  
  cout << "Ingrese el número base: " << endl;
  cin >> base;
  cout << "Ingrese el limite máximo: " << endl;
  cin >> limite;

  for (int i = 0; potencia < limite; i++) {
    potencia = pow(base, i);
    if (potencia < limite) {
    vector_potencias.push_back(potencia);
    }
  }

  int tamaño_vector = vector_potencias.size();
  cout << "Todas las potencias del numero " << base << " que son menores al número " << limite << " son: " << endl;
  for (int i = 0; i < tamaño_vector; i++ ) {
    cout << vector_potencias[i] << " ";
  };
  cout << endl;
  return 0;
}
