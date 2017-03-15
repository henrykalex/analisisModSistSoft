//
//  Sujeto.cpp
//  TareaObserverPattern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "Sujeto.hpp"
#include <algorithm>

void Sujeto::Agregar(Noticiero *noti){
    noticieros.push_back(noti);
}
void Sujeto::Eliminar(Noticiero *noti){
    noticieros.erase(std::remove(noticieros.begin(), noticieros.end(), noti), noticieros.end());
}

void Sujeto::Correponsales(std::string nombre, std::string mensaje){
    std::vector<Noticiero*>::const_iterator iter;
    for(iter = noticieros.begin(); iter != noticieros.end(); ++iter){
        if(*iter != 0){
            (*iter)->Noticia(nombre, mensaje);
        }
    }
}
