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
#include <list>
#include <algorithm>
#include "Videojuego.hpp"

class Almacen
{
    
private:
    static Almacen* instance;
    static std::vector<Videojuego *> * inventario;
    static std::list<Videojuego *> * historial;
    
    static int tamañoMaximo;
    static int tamañoActual;
    Almacen(){
        instance = this;
    }
public:
    static Almacen* getInstance(int t){
        std::cout<<"Creando Inventario ";
        if(instance != 0){
            std::cout<<"(Ya hay inst)\n";
            return instance;
        }else{
            std::cout<<"(No hay inst)\n";
            Almacen();
            tamañoMaximo = t;
            return instance;
        }
    }
    void printInst(){std::cout << instance << std::endl;}
    void setTamMax(int tamMax);
    void agregaVideojuego(std::string tipo, std::string nom, int numSer,std::string rat, float cst, std::string sbTp);
    
    void eliminaVideojuego(std::string nombre);//Guardar en historial hacer delete en su debido tiempo
    void eliminaVideojuego(int numS);
    void desHacer();//Guardar en un array de 3 OP crear clase para manejo del array historial.hpp
    
    void ordenaAsc();//Usar sort y sobrecarga de operadores
    void ordenaDesc();
    
    bool buscarVideojuego(std::string nombre);//Usar std::find para buscar usando un objeto
    bool buscarVideojuego(int numS); //temporal, sobrecargar == con nombre OR numS
    std::vector<Videojuego *>::iterator buscarVideojuegoI(std::string nombre);
    std::vector<Videojuego *>::iterator buscarVideojuegoI(int numS);
    
    int totalVideojuegos();//vector count
    void imprimeTodo();//forEach vector
    void imprimeHist();
    
};
#endif /* Almacen_hpp */
