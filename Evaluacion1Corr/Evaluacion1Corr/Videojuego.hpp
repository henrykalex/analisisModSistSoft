//
//  Videojuego.hpp
//  Evaluacion1
//
//  Created by Henry on 08/02/17.
//  Copyright © 2017 Henryk. All rights reserved.
//

#ifndef Videojuego_hpp
#define Videojuego_hpp

#include <iostream>
#include <string>

class Videojuego
{
protected:
    std::string nombre = "";
    int numSerie = 0;
    std::string rating = "";
    float costo = 0.0f;
    void incrementaNum(){
        numSerie++;
    }
    
public:
    virtual void concepcion() = 0;
    virtual void diseño() = 0;
    virtual void planificacion() = 0;
    virtual void produccion() = 0;
    virtual void pruebasDeAceptacion() = 0;
    virtual std::string getDatos() = 0;
    
    int getNumSerie(){return numSerie;}
    std::string getNombre(){return nombre;}
    float getCosto(){return costo;}
    
    virtual Videojuego* clonar() = 0;
    
    template<class T>
    static Videojuego* factoryMethod(std::string subTipo, std::string nm, int ns, std::string rt, float ct)
    {
        T* t  = new T(subTipo, nm, ns, rt, ct);
        t->concepcion();
        t->diseño();
        t->planificacion();
        t->produccion();
        t->pruebasDeAceptacion();
        t->getDatos();
        return t;
    }
};


template <class SubClase>
class ClonVideojuego : public Videojuego
{
public:
    virtual Videojuego* clonar()
    {
        SubClase *subC = new SubClase(dynamic_cast<SubClase&>(*this));
        subC->incrementaNum();
        return subC;
    }
};


class Estrategia : public ClonVideojuego<Estrategia>
{
public:
    std::string subTipo;
    Estrategia(std::string subT, std::string nm, int ns, std::string rt, float ct){
        std::cout<<"Construyendo estrategia\n";
        subTipo = subT;
        numSerie = ns;
        nombre = nm;
        rating = rt;
        costo = ct;
    }
    void concepcion(){std::cout<<"Concepcion >";}
    void diseño(){std::cout<<"Diseño >";}
    void planificacion(){std::cout<<"Planificacion >";}
    void produccion(){std::cout<<"Produccion >";}
    void pruebasDeAceptacion(){std::cout<<"Pruebas >\n";}
    
    std::string getDatos(){return ": "+subTipo+" "+nombre+" "+std::to_string(numSerie)+" "+rating+" "+std::to_string(costo)+"\n";}
};

class Aventuras : public ClonVideojuego<Aventuras>
{
public:
    std::string subTipo;
    Aventuras(std::string subT, std::string nm, int ns, std::string rt, float ct){
        std::cout<<"Construyendo aventuras\n";
        subTipo = subT;
        numSerie = ns;
        nombre = nm;
        rating = rt;
        costo = ct;
    }
    void concepcion(){std::cout<<"Concepcion >";}
    void diseño(){std::cout<<"Diseño >";}
    void planificacion(){std::cout<<"Planificacion >";}
    void produccion(){std::cout<<"Produccion >";}
    void pruebasDeAceptacion(){std::cout<<"Pruebas >\n";}
    std::string getDatos(){return ": "+subTipo+" "+nombre+" "+std::to_string(numSerie)+" "+rating+" "+std::to_string(costo)+"\n";}
};

class Aprendizaje : public ClonVideojuego<Aprendizaje>
{
public:
    std::string subTipo;
    Aprendizaje(std::string subT, std::string nm, int ns, std::string rt, float ct){
        std::cout<<"Construyendo aprendizaje\n";
        subTipo = subT;
        numSerie = ns;
        nombre = nm;
        rating = rt;
        costo = ct;
    }
    void concepcion(){std::cout<<"Concepcion >";}
    void diseño(){std::cout<<"Diseño >";}
    void planificacion(){std::cout<<"Planificacion >";}
    void produccion(){std::cout<<"Produccion >";}
    void pruebasDeAceptacion(){std::cout<<"Pruebas >\n";}
    std::string getDatos(){return ": "+subTipo+" "+nombre+" "+std::to_string(numSerie)+" "+rating+" "+std::to_string(costo)+"\n";}
};

#endif /* Videojuego_hpp */
