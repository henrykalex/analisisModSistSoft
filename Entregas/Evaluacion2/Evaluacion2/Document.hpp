//
//  Document.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Document_hpp
#define Document_hpp

#include <stdio.h>
#include <string>
#include "Printer.hpp"

template <class D>
class Document{
protected:
    static std::string tipo;
    static D* instance;
    Document(){
    }
public:
    static D* getInstance(){
        if(!instance){
            instance = D::getInstance();
        }
        return instance;
    }
    
    void printTipo();// Imprime el tipo
    template<class P>
    void sendToPrinter(Printer<P> * p);
};

template <class D>
std::string Document<D>::tipo = "";

template <class D>
D* Document<D>::instance = 0;

template <class D>
void Document<D>::printTipo(){
    //std::cout << "Hola soy documento: "<<tipo;
    D::printTipo();
}
template <class D>
template<class P>
void Document<D>::sendToPrinter(Printer<P> * p){
    D::sendToPrinter(p);
}

#endif /* Document_hpp */
