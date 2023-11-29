#include<iostream>
#include<vector>
#include<algorithm>
int main (){
    //Vector de numeros enteros
    std:: vector<int> numeros= {100, 80, 120,20,50,70} ;
    //Ordenar el vector
    std::sort(numeros.begin(),numeros.end()) ;
    //Imprimir el vector ordenado
          std ::cout<< "Elementos ordenados: " <<std::endl;
      for(int num : numeros){
           std::cout<<num<<std::endl;
           //Imprimir el numero mayor del vector 
      int numMax= *std::max_element(numeros.begin(),numeros.end());
      std::cout<<"El numero mayor es: "<<numMax<<std::endl;
  }
}