//
//  CountVisitor.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef CountVisitor_hpp
#define CountVisitor_hpp

#include <stdio.h>
#include "Number.hpp"
#include "Integer.hpp"
#include "Double.hpp"
#include "Visitor.hpp"

class CountVisitor : public Visitor{
public:
    void visit(Integer* i){
        std::cout << Integer::countInts;
    }
    void visit(Double* i){
        std::cout << Double::countDouble;
    }
};

#endif /* CountVisitor_hpp */
