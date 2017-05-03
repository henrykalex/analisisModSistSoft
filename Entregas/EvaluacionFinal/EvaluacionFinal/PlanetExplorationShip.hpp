//
//  PlanetExplorationShip.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef PlanetExplorationShip_hpp
#define PlanetExplorationShip_hpp

#include <iostream>
class PlanetExplorationShip : public Spacecraft{
public:
    PlanetExplorationShip(){
        std::cout << "PlanetExplorationShip constructor" << "\n";
        name = "PlanetExplorationShip";
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

#endif /* PlanetExplorationShip_hpp */
