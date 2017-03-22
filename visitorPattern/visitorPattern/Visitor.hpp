//
//  Visitor.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

//Agregar clase singleton para guardar metodos que heredaran los hijos para el metodo que regresa la instancia o la crea
#ifndef Visitor_hpp
#define Visitor_hpp

#include <stdio.h>
#include "Number.hpp"
#include "Integer.hpp"
#include "Double.hpp"
class Integer;
class Double;

template <class T>
class Visitor{
    Visitor(){
        instance = this;
    }
    static T* instance;
    
public:
    Visitor<T> getInstance(){
        if(instance == 0){
            return new T;//LLamar a un metodo protected para obtener la instancia
        }
        else
            return instance;
    }
    virtual void visit(Integer*) = 0;
    virtual void visit(Double*) = 0;
    
};

#endif /* Visitor_hpp */
