//
//  Integer.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Integer_hpp
#define Integer_hpp

#include <stdio.h>
#include "Number.hpp"
#include "Visitor.hpp"


class Integer : public Number{
public:
    Integer(){
        quienSoy = "Integer";
    }
    static int countInts;
    template<class T>
    void accept(Visitor<T>*);
};
#endif /* Integer_hpp */
