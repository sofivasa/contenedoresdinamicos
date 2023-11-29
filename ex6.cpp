#include <iostream>
#include <boost/lexical_cast.hpp>

int main (){
    std::string i = "123456789";
            try {
                //Cambiar string a int
                int i = boost::lexical_cast<int>(i);
                std::cout<<"Numero: "<<i<<std::endl;
            }catch (boost::bad_lexical_cast &e){
                //error
std::cout<<"Error: "<<e.what()<<std::endl;

            }
            return 0;
}
