#include <iostream>

using namespace std;

/*
Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

*/

int main() {
    int qtyAlfajorA, qtyAlfajorB, qtyAlfajorC, totalAlfajores;
    float porcentajeAlfajorA, porcentajeAlfajorB, porcentajeAlfajorC;

    cout << "Cantidad de alfajores A: ";
    cin >> qtyAlfajorA;
    cout << "Cantidad de alfajores B: ";
    cin >> qtyAlfajorB;
    cout << "Cantidad de alfajores C: ";
    cin >> qtyAlfajorC;
    totalAlfajores = qtyAlfajorA + qtyAlfajorB + qtyAlfajorC;

    porcentajeAlfajorA = (qtyAlfajorA * 100) / totalAlfajores;
    porcentajeAlfajorB = (qtyAlfajorB * 100) / totalAlfajores;
    porcentajeAlfajorC = (qtyAlfajorC * 100) / totalAlfajores;

    cout << "% de alfajores A: " << porcentajeAlfajorA << "\n";
    cout << "% de alfajores B: " << porcentajeAlfajorB << "\n";
    cout << "% de alfajores C: " << porcentajeAlfajorC << "\n";

    return 0;
}
