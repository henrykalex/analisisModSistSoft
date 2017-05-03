//
//  StonyMeteorite.hpp
//  EvaluacionFinal
//
//  Created by Enrique Mondragon on 03/05/17.
//  Copyright © 2017 ealex_mondrat. All rights reserved.
//

#ifndef StonyMeteorite_hpp
#define StonyMeteorite_hpp

#include <iostream>
class StonyMeteorite : public Asteroid{
public:
    StonyMeteorite(){
        std::cout << "StonyMeteorite constructor" << "\n";
        name = "StonyMeteorite";
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

#endif /* StonyMeteorite_hpp */
