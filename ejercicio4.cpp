#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int hijo_mayor, hijo_medio, hijo_menor;
    int hijos[3];

    cout << "ingrese la edad de uno de los niños" << endl;
    cin >> hijos[0];
    cout << "ingrese la edad de uno de los niños" << endl;
    cin >> hijos[1];
    cout << "ingrese la edad de uno de los niños" << endl;
    cin >> hijos[2];
    
    int n = sizeof(hijos) / sizeof(hijos[0]);
    sort(hijos, hijos + n);
    
    int media_edades = hijos[0] + hijos[1] + hijos[2];
    media_edades = media_edades / 3;
    
    cout << "La edad del hijo menor es " << hijos[0] << " años, la de el mayor es "
    << hijos[2] << " años y la media de sus edades es " << media_edades << " años" << endl;



}
