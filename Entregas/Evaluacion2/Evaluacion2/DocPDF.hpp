//
//  DocPDF.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef DocPDF_hpp
#define DocPDF_hpp

#include <iostream>
#include "Document.hpp"

class DocPDF : public Document<DocPDF>{
protected:
    static DocPDF * instance;
    DocPDF(){
        tipo = "PDF";
    }
public:
    static DocPDF* getInstance(){
        if(!instance){
            instance = new DocPDF();
        }
        return instance;
    }
    static void printTipo();//Se puede re-implementar
    
    template<class P>
    static void sendToPrinter(Printer<P> * p);
};

DocPDF * DocPDF::instance = 0;

void DocPDF::printTipo(){
    std::cout<< "\nDoc " << tipo;
}

template<class P>
void DocPDF::sendToPrinter(Printer<P> * p){
    p->printDocument(instance);
}

#endif /* DocPDF_hpp */
