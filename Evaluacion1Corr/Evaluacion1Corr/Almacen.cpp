//
//  Almacen.cpp
//  Evaluacion1
//
//  Created by Henry on 08/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#include "Almacen.hpp"
Almacen* Almacen::instance = 0;
std::vector<Videojuego *> * Almacen::inventario = new std::vector<Videojuego *>();
std::list<Videojuego *> * Almacen::historial = new std::list<Videojuego *>();
int Almacen::tamañoMaximo = 0;
int Almacen::tamañoActual = 0;

void imprimeVideojuego(Videojuego * vid){
    std::cout<<vid->getDatos();
}

bool comparaVideojuegosA(Videojuego * vid1, Videojuego * vid2){
    return vid1->getCosto() < vid2->getCosto();
}

bool comparaVideojuegosD(Videojuego * vid1, Videojuego * vid2){
    return vid1->getCosto() > vid2->getCosto();
}

void Almacen::setTamMax(int tamMax){
    tamañoMaximo = tamMax;
}

void Almacen::agregaVideojuego(std::string tipo, std::string nom, int numSer,std::string rat, float cst, std::string sbTp){
    Videojuego * tmp;
    
    
    if(tipo == "Estrategia"){
        tmp = Videojuego::factoryMethod<Estrategia>(sbTp, nom, numSer, rat, cst);
    }else{
        if(tipo == "Aventura"){
            tmp = Videojuego::factoryMethod<Aventuras>(sbTp, nom, numSer, rat, cst);
        }else{
            if(tipo == "Aprendizaje"){
                tmp = Videojuego::factoryMethod<Aprendizaje>(sbTp, nom, numSer, rat, cst);
            }else{
                std::cout<<"ERROR creando el videojuego\n";
                return;
            }
        }
    }
    
    if(tamañoActual  == tamañoMaximo){
        std::cout << "Almacen lleno! Agregando 5 espacios mas...\n";
        std::cout << "||||1||||:||||2||||:||||3||||:||||4||||:||||5||||\n\n";
        tamañoMaximo += 5;
        tamañoActual++;
    }else{
        tamañoActual++;
    }
    std::cout<<"Agregando: \n";
    tmp->getDatos();
    inventario->push_back(tmp);
    imprimeVideojuego((*(inventario->end()-1)));
    std::cout<<"\n";
}

void Almacen::eliminaVideojuego(std::string nombre){
    std::vector<Videojuego *>::iterator tmp;
    Videojuego * tmpD;
    
    tmp = buscarVideojuegoI(nombre);
    
    if(historial->size() == 3){
        tmpD = historial->front();
        delete tmpD;
        historial->pop_front();
    }
    historial->push_back(*tmp);
    inventario->erase(tmp);
    tamañoActual--;
    std::cout << "Eliminado!\n";
}
void Almacen::eliminaVideojuego(int numS){
    std::vector<Videojuego *>::iterator tmp;
    Videojuego * tmpD;
    
    tmp = buscarVideojuegoI(numS);
    
    if(historial->size() == 3){
        tmpD = historial->front();
        delete tmpD;
        historial->pop_front();
    }
    historial->push_back(*tmp);
    inventario->erase(tmp);
    tamañoActual--;
    
}
void Almacen::desHacer(){
    if(historial->size() == 0){
        std::cout << "Nada que deshacer\n";
        return;
    }
    inventario->push_back(historial->back());
    historial->pop_back();
    tamañoActual++;
}

void Almacen::ordenaAsc(){
    std::sort(inventario->begin(), inventario->end(), comparaVideojuegosA);
    std::cout << "Ordenado!";
    imprimeTodo();
}
void Almacen::ordenaDesc(){
    std::sort(inventario->begin(), inventario->end(), comparaVideojuegosD);
    std::cout << "Ordenado!";
    imprimeTodo();
}

bool Almacen::buscarVideojuego(std::string nombre){
    std::vector<Videojuego *>::iterator tmp;
    tmp = std::find_if(inventario->begin(), inventario->end(), [nombre](Videojuego * obj) {return obj->getNombre() == nombre;});
    
    if(tmp != inventario->end()){
        std::cout << "Si existe\n";
        imprimeVideojuego(*tmp);
        return true;
    }else{
        std::cout << "No existe\n";
        return false;
    }
}

std::vector<Videojuego *>::iterator Almacen::buscarVideojuegoI(std::string nombre){
    std::vector<Videojuego *>::iterator tmp;
    tmp = std::find_if(inventario->begin(), inventario->end(), [nombre](Videojuego * obj) {return obj->getNombre() == nombre;});
    
    if(tmp != inventario->end()){
        std::cout << "Si existe\n";
        imprimeVideojuego(*tmp);
        return tmp;
    }else{
        std::cout << "No existe\n";
        return tmp;
    }
}
bool Almacen::buscarVideojuego(int numS){
    std::vector<Videojuego *>::iterator tmp;
    tmp = std::find_if(inventario->begin(), inventario->end(), [numS](Videojuego * obj) {return obj->getNumSerie() == numS;});
    
    if(tmp != inventario->end()){
        std::cout << "Si existe\n";
        imprimeVideojuego(*tmp);
        return true;
    }else{
        std::cout << "No existe\n";
        return false;
    }
}

std::vector<Videojuego *>::iterator Almacen::buscarVideojuegoI(int numS){
    std::vector<Videojuego *>::iterator tmp;
    tmp = std::find_if(inventario->begin(), inventario->end(), [numS](Videojuego * obj) {return obj->getNumSerie() == numS;});
    
    if(tmp != inventario->end()){
        std::cout << "Si existe\n";
        imprimeVideojuego(*tmp);
        return tmp;
    }else{
        std::cout << "No existe\n";
        return tmp;
    }
}

int Almacen::totalVideojuegos(){
    return inventario->size();
}

void Almacen::imprimeTodo(){
    std::cout<<"\nImprimiendo: \n";
    for_each(inventario->begin(),inventario->end(),imprimeVideojuego);
    std::cout<<"Fin\n";
}

void Almacen::imprimeHist(){
    std::cout<<"\nImprimiendo H: \n";
    for_each(historial->begin(),historial->end(),imprimeVideojuego);
    std::cout<<"Fin\n";
}

