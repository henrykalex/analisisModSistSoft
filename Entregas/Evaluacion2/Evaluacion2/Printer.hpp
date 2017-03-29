//
//  Printer.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Printer_hpp
#define Printer_hpp

#include <stdio.h>
#include "Document.hpp"
template<class D>
class Document;

template <class P>
class Printer{
protected:
    static std::string tipo;
    static P* instance;
    Printer(){
    }
public:
    static P* getInstance(){
        if(!instance){
            instance = P::getInstance();
        }
        return instance;
    }
    void printTipo();
    template<class D>
    void printDocument(Document<D> * d);
};

template <class P>
std::string Printer<P>::tipo = "";

template <class P>
P* Printer<P>::instance = 0;

template <class P>
void Printer<P>::printTipo(){
    std::cout << "\nHola soy impresora: "<<tipo;
    //D::printOn();
}

template<class P>
template<class D>
void Printer<P>::printDocument(Document<D> * d){
    P::printDocument(d);
}
#endif /* Printer_hpp */
