//
//  Noticiero.hpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Noticiero_hpp
#define Noticiero_hpp

#include <iostream>
#include "Observador.hpp"

class Noticiero : Observador
{
private:
    std::string nombre;
    std::string ultimaNoticia;
public:
    Noticiero(std::string n):nombre(n){};
    void Noticia(std::string sujeto, std::string mensaje);
};

#endif /* Noticiero_hpp */
