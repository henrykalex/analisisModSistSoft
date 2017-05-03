//
//  GraphicsFactory.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef GraphicsFactory_hpp
#define GraphicsFactory_hpp

#include <iostream>
#include "Spacecraft.hpp"
#include "PlanetExplorationShip.hpp"
#include "ColonizationShip.hpp"
#include "PlanetObservationShip.hpp"
#include "Asteroid.hpp"
#include "StonyMeteorite.hpp"
#include "IronMeteorite.hpp"
#include "Planet.hpp"
#include "DesertPlanet.hpp"
#include "EarthAnalog.hpp"

class GraphicsFactory{
protected:
    GraphicsFactory(){stInstance = this;std::cout<<"Constructor GF\n";}
    static GraphicsFactory * stInstance;
public:
    static GraphicsFactory * Instance();
    
    template<class T>
    T * Produce(){
        T* t = new T;
        return t;
    }
    
};

#endif /* GraphicsFactory_hpp */

