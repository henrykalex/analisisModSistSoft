//
//  Almacen.hpp
//  Evaluacion1
//
//  Created by Henry on 08/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Almacen_hpp
#define Almacen_hpp

#include <iostream>
#include <vector>
#include "Videojuego.hpp"

class Almacen
{
    
private:
    static Almacen* instance;
    
    std::vector<Videojuego *> * inventario;
    int tamañoMaximo;
    
    Almacen()
    {
        instance = this;
        //inventario = new std::vector<Videojuego * >();
    }
public:
    
    static Almacen* getInstance(int tamMax)
    {
        if(instance != 0)
        {
            return instance;
        }
        else
        {
            Almacen();
            instance->crearInventario(tamMax);
            return instance;
        }
    }
    void printInst();
    void crearInventario(int tamMax);
    void agregaVideojuego(std::string tipo, std::string nom, int numSer,std::string rat, float cst, std::string sbTp);
    
};
#endif /* Almacen_hpp */
