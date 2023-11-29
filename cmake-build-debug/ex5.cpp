#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main () {
    //Lambda funcion que devuelva el cuadrado de un numero
    auto cuadrado=[](int num) {return num*num;};
    //Expresion lambda para imprimir el cuadrado de un numero
    std::cout<<"El cuadrado de 120 es: "<<cuadrado(120)<<std::endl;
    //Vector
    std::vector <int> numeros={20,40,60,80,100};
    //Imprimir el cuadrado de los numeros
    std::cout<<"El cuadrado de los numeros es: "<<std::endl;
     // Usar auto para la deduccion de bucle
     for(auto num:numeros){
         std::cout<<cuadrado(num)<<std::endl;


         //Puntero inteligente
         auto puntero=std::make_unique<int>(100);
         //Imprimir
         std::cout<<"El valor del puntero es: "<<puntero<<std::endl;






    };
}