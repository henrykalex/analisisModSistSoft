//
//  Almacen.cpp
//  Evaluacion1
//
//  Created by Henry on 08/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include "Almacen.hpp"

Almacen* Almacen::instance = 0;


void Almacen::printInst(){
    std::cout << instance << std::endl;
}

void Almacen::crearInventario(int tamMax){
    tamañoMaximo = tamMax;
    std::cout<<"creando";
    std::cout<<tamañoMaximo;
    Videojuego* vid1 = Videojuego::factoryMethod<Estrategia>("Lucha","lol",56,"M",55.99);
    inventario = new std::vector<Videojuego *>(tamMax,vid1);
}

void Almacen::agregaVideojuego(std::string tipo, std::string nom, int numSer,std::string rat, float cst, std::string sbTp){
    Videojuego * tmp;
    if(tipo == "Estrategia"){
        tmp = Videojuego::factoryMethod<Estrategia>(sbTp, nom, numSer, rat, cst);
    }else{
        if(tipo == "Aventuras"){
            tmp = Videojuego::factoryMethod<Aventuras>(sbTp, nom, numSer, rat, cst);
        }else{
            if(tipo == "Aprendizaje"){
                tmp = Videojuego::factoryMethod<Aprendizaje>(sbTp, nom, numSer, rat, cst);
            }else{
                std::cout<<"ERROR\n";
            }
        }
    }
    std::cout<<"Agregando: \n"<<tmp->getDatos();
    //inventario->push_back(tmp);
}
