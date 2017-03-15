//
//  DummyProduct.cpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#include "DummyProduct.hpp"

void DummyProduct::ChangePrice(float price)
{
    Notify(price);
}
