#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int first, second, third;

  cout << "Ingrese el primer número:" << endl;
  cin >> first;
  cout << "Ingrese el segundo número:" << endl;
  cin >> second;
  cout << "Ingrese el tercer número:" << endl;
  cin >> third;

  if (first <= second && second <= third) {
    cout << "La secuencia de números " << first << ", " << second << ", " << third <<  " está en orden numérico ascendente." << endl;
  } else if (first >= second && second >= third) {
    cout << "La secuencia de números " << first << ", " << second << ", " << third <<  " está en orden numérico descendente." << endl;
  } else {
    cout << "La secuencia de números " << first << ", " << second << ", " << third <<  " no está en orden numérico."<<endl;
    int arr[] = {first, second, third};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "La secuencia de números en orden ascendente seria: ";
    for (int i = 0; i < n; i++){
      cout << arr[i] << " ";
    };
    cout << endl;
    return 0;
      
  }
}
