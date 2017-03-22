//
//  Double.cpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "Double.hpp"
int Double::countDouble = 0;

void Double::accept(Visitor* v)
{
    v->visit(this);
}
