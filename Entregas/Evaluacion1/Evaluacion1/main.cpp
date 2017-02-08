//
//  main.cpp
//  Evaluacion1
//
//  Created by Henry on 08/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include <iostream>
#include "Videojuego.hpp"
#include "Almacen.hpp"

int main(int argc, const char * argv[]) {
    
    Videojuego* vid1 = Videojuego::factoryMethod<Estrategia>("Lucha","lol",56,"M",55.99);
    Videojuego* vidC = vid1->clonar();
    //vidC->concepcion();
    std::cout<<vid1->getNumSerie()<<"\n";
    std::cout<<vidC->getNumSerie()<<"\n"<<"\n";
    
    Almacen * alma = Almacen::getInstance(5);
    alma->agregaVideojuego("Aventuras", "No se", 765, "E", 57.99f , "Plataforma");
    return 0;
}
