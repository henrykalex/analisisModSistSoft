//
//  Integer.cpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "Integer.hpp"
int Integer::countInts = 0;

template<class T>
void Integer::accept(Visitor<T>* v){
    v->visit(this);
}
