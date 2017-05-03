//
//  DesertPlanet.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef DesertPlanet_hpp
#define DesertPlanet_hpp

#include <iostream>

class DesertPlanet : public Planet{
public:
    DesertPlanet(){
        std::cout << "DesertPlanet constructor" << "\n";
        name = "DesertPlanet";
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

#endif /* DesertPlanet_hpp */
