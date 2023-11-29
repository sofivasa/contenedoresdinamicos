#include<iostream>
#include<vector>

int main () {

std :: vector <int> numeros = {10,20,30,40,50};

numeros.pushback(25);
numeros.pushback(35);

std:: cout << "Numeros del vector: "<< std::endl;
for(int i=0; i<numeros.size(); i++){
    std::cout << numeros[i] << std::endl;

}
return 0;
