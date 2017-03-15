//
//  Shop.hpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef Shop_hpp
#define Shop_hpp

#pragma once
#include <iostream>
#include <string>
#include "IObserver.hpp"

class Shop : IObserver
{
    //Name of the Shop
    std::string name;
    float price;
public:
    Shop(std::string n);
    void Update(float price);
};

#endif /* Shop_hpp */
