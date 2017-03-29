//
//  AddVisitor.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef AddVisitor_hpp
#define AddVisitor_hpp

#include <stdio.h>
#include "Visitor.hpp"

class AddVisitor : public Visitor<AddVisitor>{
public:
    void visit(Integer*){
        Integer::countInts++;
    }
    void visit(Double*){
        Double::countDouble++;
    }
};

#endif /* AddVisitor_hpp */
