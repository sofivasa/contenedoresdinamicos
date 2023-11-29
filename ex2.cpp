#include<iostream>
#include<list>
#include<stack>

int main() {
    //Lista de numeros decimalea (float)
    std::list<float> lista={2.5,3.5,8.6,9.7};
    //Agragar numero
    std::stack<float, std::list<float>> pila (lista);
//Usar bucle while para imprimir la lista
while (!pila.empty()){
    std::cout<<pila.top()<<std::endl;
    pila.pop();
}
return 0;
}
