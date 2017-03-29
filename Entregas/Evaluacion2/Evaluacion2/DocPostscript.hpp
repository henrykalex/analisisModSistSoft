//
//  DocPostscript.hpp
//  Evaluacion2
//
//  Created by Enrique Mondragon on 29/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef DocPostscript_hpp
#define DocPostscript_hpp

#include <iostream>
#include "Document.hpp"

class DocPostscript : public Document<DocPostscript>{
protected:
    static DocPostscript * instance;
    DocPostscript(){
        tipo = "Postscript";
    }
public:
    static DocPostscript* getInstance(){
        if(!instance){
            instance = new DocPostscript();
        }
        return instance;
    }
    static void printTipo();//Se puede re-implementar
    
    template<class P>
    static void sendToPrinter(Printer<P> * p);
};

DocPostscript * DocPostscript::instance = 0;

void DocPostscript::printTipo(){
    std::cout<< "\nDoc " << tipo;
}

template<class P>
void DocPostscript::sendToPrinter(Printer<P> * p){
    p->printDocument(instance);
}

#endif /* DocPostscript_hpp */
