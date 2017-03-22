//
//  Number.hpp
//  visitorPattern
//
//  Created by Enrique Mondragon on 22/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Number_hpp
#define Number_hpp

#include <stdio.h>
#include <string>
template <class T>
class Visitor;
class Number{
protected:
    std::string quienSoy;
public:
    std::string getQuienSoy(){return quienSoy;}
    virtual void accept(Visitor<int>*)= 0;
};

#endif /* Number_hpp */
