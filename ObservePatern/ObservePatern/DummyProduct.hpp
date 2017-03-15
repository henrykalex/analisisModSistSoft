//
//  DummyProduct.hpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//
/*ConcreteSubject: This class is the real class that implements the Subject. This class is the entity whose change will affect other objects. We have DummyProject class implemented for the same.*/

#ifndef DummyProduct_hpp
#define DummyProduct_hpp

#pragma once
#include "ASubject.hpp"

class DummyProduct : public ASubject
{
public:
    void MensajeDePrensa(std::string mensaje);
};
#endif /* DummyProduct_hpp */
