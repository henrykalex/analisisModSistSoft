//
//  PrintInyeccion.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef PrintInyeccion_hpp
#define PrintInyeccion_hpp

#include <iostream>
#include "Printer.hpp"

class PrintInyeccion : public Printer<PrintInyeccion>{
protected:
    static PrintInyeccion * instance;
    PrintInyeccion(){
        tipo = "Inyeccion";
    }
public:
    static PrintInyeccion* getInstance(){
        if(!instance){
            instance = new PrintInyeccion();
        }
        return instance;
    }
    template<class D>
    static void printDocument(Document<D> * d);
};

PrintInyeccion * PrintInyeccion::instance = 0;

template<class D>
void PrintInyeccion::printDocument(Document<D> * d){
    //printTipo();
    std::cout<<"Imprimiendo en impresora "<<tipo;
    d->printTipo();
}

#endif /* PrintInyeccion_hpp */
