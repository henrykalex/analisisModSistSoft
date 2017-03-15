//
//  ASubject.h
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//
/*Subject: This class keeps track of all the observers and provides the facility to add or remove the observers. Also it is the class that is responsible for updating the observers when any change occurs. In our solution, we have ASubject implemented for the same purpose.*/

#ifndef ASubject_h
#define ASubject_h

#pragma once
#include <vector>
#include <list>
#include "shop.h"

class ASubject
{
    //Lets keep a track of all the shops we have observing
    std::vector<Shop*> list;
    
public:
    void Attach(Shop *product);
    void Detach(Shop *product);
    void Notify(float price);
};

#endif /* ASubject_h */
