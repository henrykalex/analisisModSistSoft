//
//  PrintLaser.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef PrintLaser_hpp
#define PrintLaser_hpp

#include <iostream>
#include "Printer.hpp"

class PrintLaser : public Printer<PrintLaser>{
protected:
    static PrintLaser * instance;
    PrintLaser(){
        tipo = "Laser";
    }
public:
    static PrintLaser* getInstance(){
        if(!instance){
            instance = new PrintLaser();
        }
        return instance;
    }
    template<class D>
    static void printDocument(Document<D> * d);
};

PrintLaser * PrintLaser::instance = 0;

template<class D>
void PrintLaser::printDocument(Document<D> * d){
    //printTipo();
    std::cout<<"Imprimiendo en impresora "<<tipo;
    d->printTipo();
}
#endif /* PrintLaser_hpp */
