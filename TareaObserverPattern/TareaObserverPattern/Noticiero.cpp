//
//  Noticiero.cpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "Noticiero.hpp"
void Noticiero::Noticia(std::string sujeto, std::string mensaje)
{
    ultimaNoticia = "\nPeriodico: "+nombre+"\nEl presidente, "+sujeto+", dijo:\n''"+mensaje+"''";
    std::cout << ultimaNoticia << "\n";
}
