//
//  Sujeto.hpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Sujeto_hpp
#define Sujeto_hpp

#include <vector>
#include "Noticiero.hpp"

class Sujeto
{
    std::vector<Noticiero*> noticieros;
public:
    void Agregar(Noticiero *noti);
    void Eliminar(Noticiero *noti);
    void Correponsales(std::string nombre, std::string mensaje);
};

#endif /* Sujeto_hpp */
