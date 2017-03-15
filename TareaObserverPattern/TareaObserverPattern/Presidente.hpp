//
//  Presidente.hpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Presidente_hpp
#define Presidente_hpp

#include "Sujeto.hpp"

class Presidente : public Sujeto
{
private:
    std::string nombre;
    std::string pais;
public:
    Presidente(std::string n, std::string p):nombre(n),pais(p){
        std::cout<<"Nuevo presidente de"+pais+"\n";}
    void MensajeDePrensa(std::string mensaje);
};

#endif /* Presidente_hpp */
