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
protected:
    static T* instance;
    Visitor(){
        instance = 0;
    }
public:
    static T* getInstance();
    virtual void visit(Integer*) = 0;
    virtual void visit(Double*) = 0;
};

//template <class T>
//T* Visitor<T>::instance = 0;

template <class T>
T* Visitor<T>::getInstance(){
    if (!instance){
        instance = T::getInstance();
    }
    return instance;
}

#endif /* Visitor_hpp */
