//
//  PresentVisitor.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef PresentVisitor_hpp
#define PresentVisitor_hpp

#include <stdio.h>
class PresentVisitor : public Visitor{
    PresentVisitor(){
        instance = this;
    }
    static PresentVisitor* instance;
public:
    static PresentVisitor* getInstance(){
        if(instance == 0){
            return new PresentVisitor;
        }
        else
            return instance;
    }
    void visit(Integer* i){
        std::cout << i->getQuienSoy();
    }
    void visit(Double* d){
        std::cout << d->getQuienSoy();
    }
};
PresentVisitor* PresentVisitor::instance = 0;

#endif /* PresentVisitor_hpp */
