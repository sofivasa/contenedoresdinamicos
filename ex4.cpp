#include <iostream>
#include <valarray>

int main (){
    //Crear un valarray de decimales (float)
    std:: valarray<float> numeros= {10.5,8.5,6.5,2.2};
    //suma los elementos
    std::cout<<"Suma de los elementos:"<<numeros.sum()<<std::endl;
    //Sumar 2 a cada elemento
    numeros+= 2.0;
    //Imprimir los resultados
    std::cout<<"Resultado de la suma +2 de cada elemento:";
    for( double num:numeros){
        std::cout<<num<<std::endl;
       //Multiplicar por 3 cada elemento
       numeros*=3.0;
       //Imprimir resultados de la multiplicacion
       std::cout<<"Resultado de la multiplicacion de cada elemento: ";
       for(double num:numeros){
           std::cout<<num<<std::endl;
           //Restar 2 a cada elemento
           numeros=-2.0;
           //imprimir resta
           std::cout<<"Resultado de la resta: ";
           for(double num:numeros){
               std::cout<<num<<std::endl;
               //Dividir entre 4 cada elemento
               numeros/=4.0;
               //Imprimir resultados de la division
               std::cout<<"Resultado de la division: ";
               for(double num:numeros){
                   std::cout<<num<<std::endl;
               }
           }

       }

    }


}