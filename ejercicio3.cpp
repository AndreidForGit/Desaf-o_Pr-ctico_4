#include <iostream>

using namespace std;

int main(){
    int notas[4];
    cout << "Ingrese la primera nota:" << endl;
    cin >> notas[0];
    cout << "Ingrese la segunda nota:" << endl;
    cin >> notas[1];
    cout << "Ingrese la tercera nota:" << endl;
    cin >> notas[2];
    cout << "Ingrese la cuarta nota:" << endl;
    cin >> notas[3];

    int nota_total = notas[0]+notas[1]+notas[2]+notas[3];
    nota_total = nota_total/4;

    string puntuacion;

    if (nota_total >= 90){
	puntuacion = "A";
    } else if (nota_total >= 80 && nota_total < 90) {
	puntuacion = "B";
    } else if (nota_total >= 70 && nota_total < 80) {
	puntuacion = "C";
    } else if (nota_total >= 60 && nota_total < 70) {
	puntuacion = "D";
    } else if (nota_total < 60) {
	puntuacion = "E";
    }

    cout << "el promedio del estudiante es: " << nota_total <<  ", su puantuación fue: " << puntuacion << endl;
}
