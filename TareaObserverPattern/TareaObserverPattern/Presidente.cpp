//
//  Presidente.cpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "Presidente.hpp"

void Presidente::MensajeDePrensa(std::string mensaje)
{
    Correponsales(nombre, mensaje);
}
