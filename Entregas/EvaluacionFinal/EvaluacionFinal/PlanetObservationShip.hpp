//
//  PlanetObservationShip.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef PlanetObservationShip_hpp
#define PlanetObservationShip_hpp

#include <iostream>
class PlanetObservationShip : public Spacecraft{
public:
    PlanetObservationShip(){
        std::cout << "PlanetObservationShip constructor" << "\n";
        name = "PlanetObservationShip";
    }
    void visit(Planet * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
    void visit(Spacecraft * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
    void visit(Asteroid * a){
        std::cout <<"("<<name<< ")Colisionando con: "<< a->getName() << "\n";
    }
};

#endif /* PlanetObservationShip_hpp */
