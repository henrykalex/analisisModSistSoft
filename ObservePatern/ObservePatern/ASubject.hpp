//
//  ASubject.hpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef ASubject_hpp
#define ASubject_hpp

#pragma once
#include <vector>
#include <list>
#include "Shop.hpp"

class ASubject
{
    //Lets keep a track of all the shops we have observing
    std::vector<Shop*> list;
    
public:
    void Attach(Shop *product);
    void Detach(Shop *product);
    void Notify(float price);
};

#endif /* ASubject_hpp */
