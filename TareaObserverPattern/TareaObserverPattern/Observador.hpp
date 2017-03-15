//
//  Observador.hpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Observador_hpp
#define Observador_hpp
#include <string>

class Observador
{
public://Clase abstracta que define el observador
    virtual void Noticia(std::string sujeto, std::string mensaje) = 0;
};
#endif /* Observador_hpp */
