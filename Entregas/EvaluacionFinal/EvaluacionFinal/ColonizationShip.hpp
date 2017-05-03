//
//  ColonizationShip.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef ColonizationShip_hpp
#define ColonizationShip_hpp

#include <iostream>
class ColonizationShip : public Spacecraft{
public:
    ColonizationShip(){
        std::cout << "ColonizationShip constructor" << "\n";
        name = "ColonizationShip";
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

#endif /* ColonizationShip_hpp */
