#include<iostream>
#include<vector>

int main () {
//Crear un vector de enteros
    std::vector<int> numeros = {10, 20, 30, 40, 50};
//Agregar elemento al final del vector
    numeros.push_back(25);
    numeros.push_back(35);
//Agrgar numero en la segunda posicion
    std::cout << "Numeros del vector: " << std::endl;
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << std::endl;

    }
    return 0;
}