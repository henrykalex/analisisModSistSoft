//
//  IObserver.hpp
//  ObservePatern
//
//  Created by Enrique Mondragon on 14/03/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//
/*Observer: This represents an interface that defines the method that should be called whenever there is change. We have implemented this as IObserver.*/

#ifndef IObserver_hpp
#define IObserver_hpp

#pragma once

class IObserver
{
public:
    virtual void Update(float price) = 0;
};

#endif /* IObserver_hpp */
